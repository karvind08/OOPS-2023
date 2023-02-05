#include <iostream>
using namespace std;

void display()
{
    class Example
    {
        int a;

    public:
        void getdata(int x)
        {
            a = x;
        }
        void show()
        {
            cout << "The a is :" << a;
        }
    };
    Example E;
    E.getdata(10);
    E.show();
}

int main()
{
    display();
    return (0);
}