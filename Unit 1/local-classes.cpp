// A program without any compilation error to demonstrate
// that a local class type name can only be used
// in the enclosing function

#include <iostream>
using namespace std;

void fun()
{
    // Local class
    class Test
    {
        int a = 10;

    public:
        void display()
        {
            cout << a << endl;
            cout << "Display Function";
        }
    };

    Test t; // Fine
    t.display();
}

int main()
{
    fun();
    return 0;
}
