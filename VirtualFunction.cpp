#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Speak from base class " << endl;
    }
    void fun()
    {
        cout << "From base fun " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog bo bo " << endl;
    }
    void fun()
    {
        cout << "Dog fun " << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Cat maumau  " << endl;
    }
    void fun()
    {
        cout << "Cat fun " << endl;
    }
};

int main()
{
    cout << " From main " << endl;
    vector<unique_ptr<Animal>> obj;
    obj.push_back(make_unique<Dog>());
    obj.push_back(make_unique<Cat>());
    for (auto &a : obj)
    {
        a->speak();
        a->fun();
    }
    return 0;
}