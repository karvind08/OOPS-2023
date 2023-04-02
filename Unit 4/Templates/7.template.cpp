#include <iostream>
using namespace std;
template <class T>
void swap(T a, T b)
{
    T t = a;
    a = b;
    b = t;
    cout << "The numbers after swapping are: " << a << " " << b << endl;
}
int main()
{
    swap(10, 20);
    swap(12.4, 56.7);
    return (0);
}