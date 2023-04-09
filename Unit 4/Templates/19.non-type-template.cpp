#include <iostream>
using namespace std;
template <class T, int n>
class Example
{
    T a[5];

public:
    Example(T b[5])
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i];
        }
    }
    void sum()
    {
        T s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
        }
        cout << "The sum of elements is: " << s << endl;
    }
};
int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    Example<int, 5> E1(ar);
    E1.sum();
    return (0);
}