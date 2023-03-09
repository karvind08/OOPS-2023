#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    void getdata(int, int);
};
class B : private A
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
    getdata(5, 6);
    c = a * b;
    cout << "The C:" << c << endl;
}
int main()
{
    B B1;
    B1.display();
    return (0);
}