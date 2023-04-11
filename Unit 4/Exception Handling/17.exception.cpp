// We need to mention it in the divide function
#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
        try
        {
            if (b == 0)
                throw(5);
        }
        catch (int e)
        {
            cout << "division is not possible" << endl;
        }
    }
    void divide()
    {
        cout << "The division is: " << a / b << endl;
    }
};
int main()
{
    Example E1;
    E1.getdata(20, 4);
    E1.divide();
    cout << "----------" << endl;
    Example E2;
    E2.getdata(4, 0);
    E2.divide();
    return (0);
}