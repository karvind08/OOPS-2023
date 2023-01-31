#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    void getdata(int, int);
    void display();
};

inline void Example::getdata(int x, int y)
{
    a = x;
    b = y;
}
inline void Example::display()
{
    cout << a << " " << b << endl;
}

int main()
{
    Example E1, E2;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    return (0);
}