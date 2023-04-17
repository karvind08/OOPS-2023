#include <iostream>
using namespace std;
class Example
{
public:
    void display()
    {
        cout << "exceptions handled";
    }
};
int main()
{
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            Example E1;
            throw(E1);
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (Example E)
    {
        E.display();
    }
    return (0);
}