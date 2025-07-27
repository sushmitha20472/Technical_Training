#include <iostream>
#include<time.h>
#include<ctype.h>
using namespace std;

int main()
{
    char s[100];
    int i;
    cout<<"Enter the string in lower case"<<endl;
    cin.getline(s,100);
    for(i=0;s[i]!='\0';i++)
    {
       s[0]=toupper(s[0]);
        if(isspace(s[i]))
        {
            s[i+1]=toupper(s[i+1]);
        }
    }
    cout<<s;
    return 0;
}
