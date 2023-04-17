#include <iostream>
using namespace std;
void divide(int x, int y)
{
    try
    {
        if (y == 0)
            throw(10);
        else
            cout << x / y << endl;
    }
    catch (int e)
    {
        throw;
    }
}
int main()
{
    try
    {
        divide(10, 3);
        divide(30, 0);
    }
    catch (int)
    {
        cout << "All Exceptions are handled" << endl;
    }
    return (0);
}