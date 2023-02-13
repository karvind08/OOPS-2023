#include <iostream>
using namespace std;
class Example
{
    int n;

public:
    void getnumber(int);
    void display();
    Example operator-();
};
void Example::getnumber(int x)
{
    n = x;
}
void Example::display()
{
    cout << n << endl;
}
Example Example::operator-()
{
    Example E;
    E.n = -n;
    return (E);
}
int main()
{
    Example A, R;
    A.getnumber(10);
    A.display();
    R = -A;
    R.display();
    return (0);
}