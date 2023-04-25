#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> L1 = {10, 2, 43, 14};
    list<int>::iterator i;
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    i = L1.begin();
    L1.erase(i);
    cout << "\nThe List after erasing an element" << endl;
    for (auto i = L1.begin(); i != L1.end(); i++)
        cout << *i << " ";
    return (0);
}