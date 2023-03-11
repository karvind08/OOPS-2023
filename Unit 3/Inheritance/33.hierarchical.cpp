#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void geta(int x)
    {
        a = x;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << a << endl;
    }
};
class C : public A
{
public:
    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    B B1;
    B1.geta(10);
    B1.display();
    C C1;
    C1.geta(20);
    C1.show();
    return (0);
}