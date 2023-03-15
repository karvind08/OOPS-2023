#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0;
};
class B : public A
{
public:
    void display()
    {
        cout << "Display from class B" << endl;
    }
};
int main()
{
    B B1;
    B1.display();
    return (0);
}