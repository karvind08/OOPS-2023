#include <iostream>
using namespace std;
class Parent
{

public:
    Parent()
    {
        cout << "parent constructor invoked" << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "Child constructor invoked" << endl;
    }
};
int main()
{
    Child C1;
    return (0);
}