#include <iostream>
using namespace std;
template <class T1, class T2>
void display(T1 x, T2 y)
{
    cout << x << " " << y << endl;
}
int main()
{
    display(2, 4.5);
    display(2, 3);
    display("Hello", 23);
    return (0);
}