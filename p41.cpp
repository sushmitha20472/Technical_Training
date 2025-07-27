#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    do {
        cout << start << " ";
        start++;
    } while (start <= end);
    return 0;
}

