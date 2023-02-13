// Pointer to Data Member of Class
#include <iostream>
using namespace std;
class Example
{
public:
    int n = 10;
};
int main()
{
    int Example::*P;
    P = &Example::n;
    Example E;
    // E.*P = 10;
    cout << E.*P << endl;
    return (0);
}