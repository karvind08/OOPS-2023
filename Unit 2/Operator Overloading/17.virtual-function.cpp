#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void show()
    {
        cout << "Parent Show" << endl;
    }
    void display()
    {
        cout << "Parent Display" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child Show" << endl;
    }
    void display()
    {
        cout << "Child Display" << endl;
    }
};
int main()
{
    Parent *P;
    Child C;
    P = &C;
    P->show();
    P->display();
    return (0);
}