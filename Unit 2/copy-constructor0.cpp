#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example()
    {
        cout << "Enter the Numbers: ";
        cin >> a >> b;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Example E1;
    E1.display();
    Example E2;
    E2 = E1;
    E2.display();
    return (0);
}