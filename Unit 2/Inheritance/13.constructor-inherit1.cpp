#include <iostream>
using namespace std;
class Parent
{

public:
    Parent()
    {
        cout << "Parent Default Constructor Invoked" << endl;
    }
    Parent(int a)
    {
        cout << "Parent Parametrized Constructor Invoked" << a << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Child constructor invoked" << endl;
    }
    Child(int a)
    {
        cout << "Child Parametrized Constructor Invoked " << a << endl;
    }
};
int main()
{
    Child C1(10);
    return (0);
}