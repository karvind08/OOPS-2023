#include <iostream>
using namespace std;
class A
{
public:
    void f1(int x)
    {
        cout << "A F1 " << x << endl;
    }
};
class B : public A
{
public:
    void f1(float y)
    {
        cout << "B F1 " << y << endl;
    }
};
int main()
{
    B B1;
    B1.f1(5);
    B1.f1(4.5);
    return (0);
}