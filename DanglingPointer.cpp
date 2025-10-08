#include <iostream>
using namespace std;

class A
{
    virtual void f(){}
int a;
};
int main() {
    int* ptr = new int(10);  // Dynamically allocated
    cout << "Value: " << *ptr << endl;

    delete ptr;              // Memory deallocated
    cout << "After delete: " << *ptr << endl; // 🔴 Dangling pointer used here
    cout<<"size of A "<<sizeof(A)<<endl;
    return 0;
}
