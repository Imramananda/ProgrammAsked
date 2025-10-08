#include<iostream>
#include<memory>
using namespace std;
class A
{
   void f(){}
};
class B
{
    int a;
    void f(){}
};
class C
{
    public:
    int a;
    virtual void f(){
        cout<<"C"<<endl;
    }
};
class D:public C
{
    public:
    int a;
    void f() override
    {
        cout<<"D"<<endl;
    }
};
int main()
{
cout<<"A :"<<sizeof(A)<<endl;
cout<<"B :"<<sizeof(B)<<endl;
cout<<"C :"<<sizeof(C)<<endl;
cout<<"D :"<<sizeof(D)<<endl;
std::unique_ptr<C> p = std::make_unique<D>();
p->f();
return 0;
}