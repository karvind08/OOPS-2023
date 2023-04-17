#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cout << "Enter the numbers: ";
        cin >> a >> b;
        try
        {
            if (b == 0)
                throw(3);
            else
                cout << "The division is:" << a / b;
        }
        catch (int e)
        {
            throw;
        }
    }
    catch (int)
    {
        cout << "Division is not possible";
    }
    return (0);
}