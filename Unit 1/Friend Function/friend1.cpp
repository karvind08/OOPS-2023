// Friend fucntion example with one data member & friend function in public section
#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    void getdata(int);
    friend void add(Example, Example);
};
void Example::getdata(int x)
{
    a = x;
}
void add(Example E1, Example E2)
{
    int s = E1.a + E2.a;
    cout << "\nThe sum is: " << s << endl;
}
int main()
{
    Example E1, E2, E;
    E1.getdata(10);
    E2.getdata(20);
    add(E1, E2);
}
