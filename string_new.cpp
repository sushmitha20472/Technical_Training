#include<iostream>
#include<stdlib.h>
#include<cctype>
using namespace std;

char* string_new(char *a, int len)
{
    char *y = (char*)malloc(len * sizeof(char));
    int k = 0;
    for(int i = 0; i < len; i++)
    {
        if((isalnum(a[i])||isspace(a[i])))
        {
            y[k] = a[i];
            k++;
        }
    }
    y[k] = '\0'; 
    return y;
}

int main()
{
    int n = 0, i;
    cout << "Enter a string: ";
    char *b = (char*)malloc(1000 * sizeof(char));
    cin.getline(b, 1000); 

    for(i = 0; b[i] != '\0'; i++)
    {
        n++;
    }

    b = (char*)realloc(b, n * sizeof(char));
    char *c = string_new(b, n);
    cout << c;

    free(b);
    free(c);
    return 0;
}

