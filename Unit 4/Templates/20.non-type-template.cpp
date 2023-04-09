#include <iostream>
using namespace std;
template <class T, int n>
class Example
{
    T *a;

public:
    Example(T *b)
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
        cout << "The sum of elements: " << s << endl;
    }
};
int main()
{
    int arr[] = {20, 34, 10, 35, 67, 89, 100};
    Example<int, 4> E1(arr);
    E1.sum();
    // float arr2[] = {2.3, 4.5, 6.7, 7.8, 8.9};
    // Example<float, 4> E2(arr2);
    // E2.sum();
    return (0);
}