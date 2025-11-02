#include<iostream>
using namespace std;

int main()
{

    char s[] = "Ira";
    int len = 0;
    while(s[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len-1;i++)
    {
        char tmp = s[i];
        s[i]=s[len-1];
        s[len-1]=tmp;
        len--;
    }
    cout<<"Reversed String "<<s<<endl;
}