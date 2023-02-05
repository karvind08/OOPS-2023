// Accessing static & Instance variable

#include <iostream>
using namespace std;
class Example
{
    static int count;
    int n;

public:
    void getdata(int);
    void display();
};
void Example::getdata(int x)
{
    n = x;
    count++;
}
void Example::display()
{
    cout << "The count is: " << count << endl;
    cout << "The n is: " << n << endl;
}
int Example::count;
int main()
{
    Example E, E1;
    E.display();
    E1.display();
    E.getdata(10);
    E.display();
    E1.display();
    E1.getdata(20);
    E.display();
    E1.display();
    return (0);
}