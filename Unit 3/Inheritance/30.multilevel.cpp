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
protected:
    int b;

public:
    void getb(int y)
    {
        b = y;
    }
};
class C : public B
{
    int res;

public:
    void display();
};
void C::display()
{
    res = a * b;
    cout << "The result is: " << res << endl;
}
int main()
{
    C C1;
    C1.geta(10);
    C1.getb(20);
    C1.display();
    return (0);
}