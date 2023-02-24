#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    // Example()
    // {
    // }
    Example(int, int);
    void display()
    {
        cout << a << " " << b << endl;
    }
    Example(Example &);
};
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
Example::Example(Example &E)
{
    a = E.a;
    b = E.b;
}
int main()
{
    Example E1(100, 200);
    E1.display();
    Example E2(E1);
    // E2 = E1;
    E2.display();
    return (0);
}