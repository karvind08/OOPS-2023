#include <iostream>
using namespace std;
class Example
{

public:
    static int n;
    Example();
    ~Example();
};
int Example::n;
Example::Example()
{
    cout << "Constructor Invoked: " << n << endl;
    n++;
}
Example::~Example()
{
    cout << "Destructor Invoked: " << n << endl;
    n--;
}
int main()
{
    Example E1, E2, E3;
    cout << Example::n << endl;
    return (0);
}