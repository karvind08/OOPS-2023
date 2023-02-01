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
    void display(Test);
};
Test add(Test T)
{
    Test T1;
    T1.a = T.a + T.b;
    return (T1);
}
void Test::display(Test T2)
{
    cout << T2.a;
}

int main()
{
    Test A, B;
    A.getab(10, 20);
    B = add(A);
    B.display(B);
    return (0);
}