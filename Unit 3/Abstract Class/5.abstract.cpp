#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0;
    void show()
    {
        cout << "Show in Class A" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Display in Class B" << endl;
    }
};
int main()
{
    B B1;
    B1.show();
    B1.display();
    return (0);
}