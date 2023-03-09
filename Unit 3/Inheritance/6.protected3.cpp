#include <iostream>
using namespace std;
class Parent
{
    int a;

protected:
    int b;

public:
    int c;
    void getb()
    {
        b = 100;
        cout << b << endl;
    };
    int geta()
    {
        a = 10;
        return (a);
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << c << endl;
        cout << geta();
        getb();
    }
};
int main()
{
    Child C1;
    C1.c = 20;
    C1.display();
    return (0);
}