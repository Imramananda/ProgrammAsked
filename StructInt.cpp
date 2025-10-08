#include<iostream>
using namespace std;

struct StructInt
{
    StructInt() = default;
    int goal;
    /* data */
};

int main()
{
    StructInt s;
    cout<<"Rama : "<<s.goal<<endl;
    return 0;
}

