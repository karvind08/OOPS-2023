#include <iostream>
using namespace std;
class Example
{
public:
    int n = 10;
};
int main()
{
    Example E;
    int Example::*P;
    P = &Example::n;
    cout << E.n << endl;
    cout << E.*P << endl;
    return (0);
}