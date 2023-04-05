#include <iostream>
using namespace std;
template <class T>
class Example
{
    T a, b;

public:
    void getdata(T x, T y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Example<int> E1;
    E1.getdata(10, 20);
    E1.display();
    cout << "------" << endl;
    Example<double> E2;
    E2.getdata(12.3, 56.4);
    E2.display();
    return (0);
}