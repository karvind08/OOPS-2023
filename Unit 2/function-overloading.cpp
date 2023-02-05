#include <iostream>
using namespace std;
class Add
{
    int a, b;

public:
    void sum();
    void sum(int, int);
    int sum(int, int, int);
};
void Add::sum()
{
    cout << "Enter the numbers: ";
    cin >> a >> b;
    int s2 = a + b;
    cout << "\nThe sum is: " << s2;
}
void Add::sum(int x, int y)
{
    a = x;
    b = y;
    int s1 = a + b;
    cout << "\nThe sum is: " << s1;
}

int Add::sum(int x, int y, int z)
{
    a = x;
    b = y;
    float r = a + b + z;
    return (r);
}

int main()
{
    Add A1;
    cout << "\nFirst Function" << endl;
    A1.sum();
    cout << "\nSecond Function";
    A1.sum(10, 20);
    cout << "\nThird Function";
    int s = A1.sum(30, 40, 10);
    cout << "\n The sum is: " << s;
    return (0);
}