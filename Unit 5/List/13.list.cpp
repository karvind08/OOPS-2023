#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::iterator i;
    for (i = L1.begin(); i != L1.end(); i++)
    {
        if (*i % 2 == 0)
            L1.erase(i);
    }
    cout << "\nThe List of odd elements" << endl;
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    return (0);
    return (0);
}