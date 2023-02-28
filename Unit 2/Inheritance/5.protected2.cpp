#include <iostream>
using namespace std;
class Parent
{
    // private:
    int n;

protected:
    int a, b;

public:
    void getdata(int x, int y, int z)
    {
        n = z;
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << " " << n << endl;
    }
};
class Child : public Parent
{
private:
    int c;

public:
    void get_c()
    {
        c = a * b;
        cout << c;
    }
};
int main()
{
    Child C1;
    C1.getdata(100, 200, 150);
    C1.display();
    C1.get_c();
    return (0);
}