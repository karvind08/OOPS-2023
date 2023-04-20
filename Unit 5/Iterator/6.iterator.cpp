#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    vector<int> v;
    vector<int>::iterator i;
    // we can also mention size here like
    // vector<int> v(n);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the numbers: ";
        cin >> a;
        v.push_back(a);
    }
    for (i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    return 0;
}