#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";   
    getline(cin, str);
    int n = str.length();
    cout<<"Length of string: "<<n<<endl;
    for(int i=0; i<n/2; i++)
    {
        str[i] = str[i] + str[n-i-1];
        // 0 = 0 + 4 = 4
        str[n-i-1] = str[i] - str[n-i-1];
        // 4 = 4 - 0 = 4
        str[i] = str[i] - str[n-i-1];
        // 4 = 4 - 4 = 0
    }
    cout<<"Reversed string: "<<str;
    return 0;
}