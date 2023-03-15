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
    // A A1; we can't create object of abstract class
    // A1.display();
    return (0);
}