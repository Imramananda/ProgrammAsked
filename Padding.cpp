#include<iostream>
#include<print>
#include<vector>

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
    return 0;
}

