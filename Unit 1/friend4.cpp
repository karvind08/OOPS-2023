// Friend fucntion example with two classes
#include <iostream>
using namespace std;
class Example;
class Test
{
    int b;

public:
    void getb(int);
    friend void add(Test, Example);
};

void Test::getb(int y)
{
    b = y;
}
class Example
{
    int a;
    friend void add(Test, Example);

public:
    void getdata(int);
};
void Example::getdata(int x)
{
    a = x;
}
void add(Test T1, Example E1)
{
    int s = T1.b + E1.a;
    cout << "\nThe sum is: " << s << endl;
}
int main()
{
    Example E1, E;
    Test T;
    E1.getdata(10);
    T.getb(20);
    add(T, E1);
}
