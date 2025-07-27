#include<iostream>
#include<stdlib.h>
using namespace std;

int n;

int* unique(int *x, int *newSize) {
    int *y = (int*)malloc(n * sizeof(int)); // to store unique elements
    int count = 0;

    for(int i = 0; i < n; i++) {
        int isUnique = 1;
        for(int j = 0; j < count; j++) {
            if(x[i] == y[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            y[count] = x[i];
            count++;
        }
    }

    *newSize = count;  // return size through pointer
    return y;          // return pointer to unique array
}

int main() {
    cout << "Enter n: ";
    cin >> n;

    int *b = (int*)malloc(n * sizeof(int));
    if(b == NULL) {
        cout << "Memory allocation failed";
        return 1;
    }

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int newSize;
    int *c = unique(b, &newSize);

    cout << "Unique elements are: ";
    for(int i = 0; i < newSize; i++) {
        cout << c[i] << " ";
    }

    free(b);
    free(c);
    return 0;
}

