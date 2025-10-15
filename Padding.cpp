#include<iostream>
#include<print>
#include<vector>
using namespace std;
struct inEff
{
    char a;
    int b;
    char c[3];
};

struct Eff
{
    int a;
    char b;
    char c[3];
    /* data */
};

int main()
{
    std::cout<<"Memory for inEff in byte "<<sizeof(inEff)<<std::endl;
    std::cout<<"Memory for eff in byte "<<sizeof(Eff)<<std::endl;
    vector<inEff>iv(10000000);
    vector<Eff>v(10000000);
    const double iEfff = sizeof(inEff)*iv.size();
    std::cout<<"Memory for inEff in byte "<<iEfff/(1024*1024)<<std::endl;
    const double Efff = sizeof(Eff)*v.size();
    std::cout<<"Memory for eff in byte "<<sizeof(Efff)/(1024*1024)<<std::endl;
    
    return 0;
}

