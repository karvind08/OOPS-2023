#include <iostream>
using namespace std;
class Example
{
};
int main()
{
    try
    {
        cout << "Hello";
        throw Example();
    }
    catch (Example E)
    {
        cout << "Exception Handled";
    }
    return (0);
}