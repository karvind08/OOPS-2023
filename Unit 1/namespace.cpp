#include <iostream>
using namespace std;
namespace first
{
    int v = 5;
}
namespace second
{
    float v = 6.5;
}
int main()
{
    double v = 5.498;
    cout << first::v << endl;
    cout << v << endl;
    cout << second::v << endl;
    return (0);
}