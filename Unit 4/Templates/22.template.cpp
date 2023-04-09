#include <iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout << a << endl;
}
int main()
{
    display(5.3 * 2.0);
    display(5 * 2.3);
    // display(5);
    // display("A");
    // display(5.2);
    return (0);
}