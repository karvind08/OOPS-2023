#include <iostream>
using namespace std;
class Example
{
public:
    Example();
    ~Example();
};
Example::Example()
{
    cout << "\nConstructor Invoked";
}
Example::~Example()
{
    cout << "\nDestructor Invoked";
}
int main()
{
    Example E1, E2, E3;
    return (0);
}