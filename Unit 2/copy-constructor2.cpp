#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example()
    {
    }
    Example(int, int);
    void display()
    {
        cout << a << " " << b << endl;
    }
};
Example::Example(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Example E1(10, 20);
    E1.display();
    Example E2(E1);
    E2.display();
    return (0);
}