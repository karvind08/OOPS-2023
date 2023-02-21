#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example();
    void display()
    {
        cout << a << " " << b << endl;
    }
    Example(Example &);
};
Example::Example(Example &E)
{
    a = E.a;
    b = E.b;
}

Example::Example()
{
    cout << "Enter the numbers: ";
    cin >> a >> b;
}
int main()
{
    Example E1;
    E1.display();
    Example E2(E1);
    E2.display();
    return (0);
}