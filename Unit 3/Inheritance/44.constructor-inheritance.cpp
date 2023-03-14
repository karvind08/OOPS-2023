#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A()
    {
        cout << "Default Constructor Class A" << endl;
    }
    A(int x, int y)
    {
        cout << "Parametrized Constructor Class A" << endl;
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class B : public A
{
    int c, d;

public:
    B()
    {
        cout << "Default Constructor Class B" << endl;
    }
    B(int x, int y)
    {
        cout << "Parametrized Constructor Class B" << endl;
        c = x;
        d = y;
    }
    void show()
    {
        cout << c << " " << d << endl;
    }
};
int main()
{
    // A A1;
    // B B1;
    B B1(10, 20);
    B1.show();
    //  B B2(100, 200);
    return (0);
}