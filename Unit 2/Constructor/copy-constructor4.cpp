#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int, int);
    Example();
    void display()
    {
        cout << a << " " << b << endl;
    }
    Example(Example&);
};
Example::Example(Example &E)
{
    a = E.a;
    b = E.b;
}
void Example::getdata(int x, int y)
{
    a = x;
    b = y;
}
Example::Example()
{
}
int main()
{
    Example E1;
    E1.getdata(10, 20);
    E1.display();
    Example E2(E1);
    E2.display();
    return (0);
}