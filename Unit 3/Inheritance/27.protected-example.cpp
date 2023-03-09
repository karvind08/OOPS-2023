#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    void getdata(int, int);
};
class B : public A
{
    int c;

public:
    void display();
};
void A::getdata(int x, int y)
{
    a = x;
    b = y;
}
void B::display()
{
    c = a * b;
    cout << "The C:" << c << endl;
}
int main()
{
    B B1;
    B1.getdata(5, 7);
    B1.display();
    return (0);
}