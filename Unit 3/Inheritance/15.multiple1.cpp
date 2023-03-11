#include <iostream>
using namespace std;
class Base1
{
protected:
    int a;

public:
    void get_a(int x)
    {
        a = x;
    }
};
class Base2
{
protected:
    int b;

public:
    void get_b(int y)
    {
        b = y;
    }
};
class Child : public Base1, public Base2
{
public:
    void display()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
    }
};
int main()
{
    Child C1;
    C1.get_a(20);
    C1.get_b(100);
    C1.display();
    return (0);
}