#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Display in A" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Display in B" << endl;
    }
    void show()
    {
        cout << "Show in B" << endl;
    }
};
int main()
{
    A A1, *P;
    B B1;
    P = &A1;
    P->display();
}