#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int x, int y)
    {
        cout << "\nConstructor Invoked";
        a = x;
        b = y;
    }
    ~Example();
    void display()
    {
        cout << a << " " << b << endl;
    }
};
Example::~Example()
{
    cout << "\nDestructor Invoked";
}
int main()
{
    Example E1(10, 20);
    E1.display();
    return (0);
}