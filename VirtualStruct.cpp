#include<iostream>
using namespace std;

struct Base
{
    Base(){cout<<"Base "<<endl;}
     ~Base(){cout<<" ~ Base "<<endl;}
};

struct A : virtual Base
{
    A(){cout<<"A "<<endl;}
    ~A(){cout<<" ~ A "<<endl;}
};
struct B : virtual Base
{
    B(){cout<<"B "<<endl;}
    ~B(){cout<<" ~ B "<<endl;}
};

struct C : virtual A, B 
{
    C(){cout<<"C "<<endl;}
    ~C(){cout<<" ~ C "<<endl;}
};

int main()
{
    C c;

    return 0;
}