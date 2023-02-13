#include <iostream>
using namespace std;
class Example
{
    int n;

public:
    void display(int x)
    {
        n = x;
        int *P;
        P = &n;
        cout << *P;
    }
};
int main()
{
    Example E;
    E.display(10);
    return (0);
}