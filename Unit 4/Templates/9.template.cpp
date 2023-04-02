#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 a, T2 b)
{
    cout << a + b << endl;
}
int main()
{
    sum(2, 3);
    sum(3.4, 4.5);
    sum(3, 6.7);
    return (0);
}