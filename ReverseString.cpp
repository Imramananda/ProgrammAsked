#include<iostream>
#include<string>
using namespace std;

void reversString(string &str)
{
    string::size_type n = str.length();
    for(string::size_type i=0; i<n/2; i++)
    {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main()
{

    cout<<"Enter a string: ";
    string str;
    getline(cin, str);
    reversString(str);
    cout<<"Reversed string: "<<str;
    return 0;
}