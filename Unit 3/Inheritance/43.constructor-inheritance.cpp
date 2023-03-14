#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Default Constructor Class A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Default Constructor Class B" << endl;
    }
};
int main()
{
    // A A1;
    B B1;
    return (0);
}