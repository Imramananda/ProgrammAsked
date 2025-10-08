#include<iostream>
class A
{
    public:
    void a()
    {
        std::cout<<"a"<<std::endl;
    }
    void b()
    {
        std::cout<<"b"<<std::endl;
    }
};

int main() {
    A *obj = nullptr;
    obj->a();
    obj->b();
    return 0;
}
