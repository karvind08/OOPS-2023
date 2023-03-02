#include <iostream>
using namespace std;
class Parent
{
protected:
    int a, b;

public:
    Parent(int x, int y)
    {
        a = x;
        b = y;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << a << b << endl;
    }
};
int main()
{
    Parent P1(10, 34);
    // P1.getdata(23, 34);
    Child C1;
    C1.display();
    return (0);
}