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
};
class C : public B
{
public:
    void display()
    {
        cout << "Display from class C" << endl;
    }
};
int main()
{
    C C1;
    C1.display();
    return (0);
}