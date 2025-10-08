#include <iostream>
using namespace std;
class Base
{
public:
    virtual void func()
    {
        cout << "Base func " << endl;
    }
    void f()
    {
        cout << "Base f " << endl;
    }
};
class Derive : public Base
{
public:
    void func()
    {
        cout << "Derive func " << endl;
    }
    void f()
    {
        cout << "Derive f " << endl;
    }
};

int main()
{
    cout << "             Pointer     " << endl;
    Base *b = new Derive;
    b->func();
    b->f();
    Derive *obj = dynamic_cast<Derive *>(b);
    if (obj == nullptr)
        cout << "Cast did not happen " << endl;
    cout << "After cast" << endl;
    obj->f();
    obj->func();

    cout << "             Reference      " << endl;
    Derive d;
    Base &bobj = d;
    bobj.func();
    bobj.f();
    try
    {
        Derive &dobj = dynamic_cast<Derive &>(bobj);
        cout << "After cast" << endl;
        dobj.f();
        dobj.func();
    }
    catch (const std::bad_cast &e)
    {
        cout << "Cast did not happen: " << e.what() << endl;
    }
    return 0;
}
