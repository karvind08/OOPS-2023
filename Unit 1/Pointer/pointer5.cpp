// Pointer to Data Member of Class
#include <iostream>
using namespace std;
class Example
{
public:
    int n = 10;
    void display()
    {
        cout << "\nThe value of n:" << n;
    }
};
int main()
{
    // int Example::*P;
    // P = &Example::n;
    Example E, *P;
    // E.*P = 10;
    // cout << E.*P << endl;
    P->display();
    return (0);
}