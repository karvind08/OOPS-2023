#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L1 = {10, 2, 43, 14};
    list<int> L2 = {5, 61, 7, 8};
    L1.sort();
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    return (0);
}