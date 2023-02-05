#include <iostream>
using namespace std;
class Example
{
    static int n;
    int m;

public:
    void getm(int);
    static void display();
};
void Example::getm(int x)
{
    m = x;
}
void Example::display()
{
    cout << n << endl;
    cout << m << endl;
}
int Example::n = 10;
int main()
{
    Example::display();
    return (0);
}
