// Pointer to object
#include <iostream>
using namespace std;
class Example
{
public:
    int n = 10;
};
int main()
{
    Example E, *P;
    P = &E;
    cout << E.n << endl;
    cout << P->n << endl;
    return (0);
}