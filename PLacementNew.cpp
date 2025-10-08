#include <iostream>
#include <new>
using namespace std;

int main()
{
    char buffer[sizeof(int)];      // Allocate raw memory on the stack
    int *p = new (buffer) int(42); // Construct an integer at the memory location `buffer`

    cout << "Value: " << *p << endl; // Output: 42
    cout << "Address of buffer: " << static_cast<void *>(buffer) << endl;
    cout << "Address of p: " << p << endl;

    // Manually call the destructor (since memory is not managed by `delete`)
    p->~int();

    return 0;
}