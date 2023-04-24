#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> D;
    deque<int>::iterator i;
    D.push_back(2);
    D.push_back(5);
    for (i = D.begin(); i != D.end(); i++)
        cout << *i << " ";
    return (0);
}