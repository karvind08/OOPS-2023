#include <iostream>
using namespace std;
#include <exception>
class Example : public exception
{
public:
    void display()
    {
        cout << "exceptions handles";
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