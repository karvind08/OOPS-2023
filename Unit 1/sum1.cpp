#include <iostream>
using namespace std;
class Sum
{

    int a, b;

public:
    void getdata()
    {
        cout << "Enter the numbers:";
        cin >> a >> b;
    }
    void getsum()
    {
        int s = a + b;
        cout << "\nThe sum is: " << s << endl;
    }
};

int main()
{
    Sum s1;
    s1.getdata();
    s1.getsum();
    return (0);
}