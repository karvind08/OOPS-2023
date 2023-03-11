#include <iostream>
using namespace std;
class A
{
    int a;
    int b;
    void getab();

public:
    void getdata();
};
class B : public A
{
public:
    void display()
    {
        // cout<<a*b<<endl;
    }
};
void A::getab()
{
    b = 5;
    a = 10;
}
void A::getdata()
{
    getab();
}
int main()
{
    B B1;
    B1.getdata();
    // B1.geta();
    B1.display();
    return (0);
}