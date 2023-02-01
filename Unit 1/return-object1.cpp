#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    void getab(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Test add(Test);
};
Test add(Test T)
{
    Test T1;
    T1.a = T.a + T.b;
    return (T1);
}
int main()
{
    Test A, B;
    A.getab(10, 20);
    B = add(A);
    cout << B.a;
    return (0);
}