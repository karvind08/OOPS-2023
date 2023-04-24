#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> D = {1, 2, 3, 4, 5};
    deque<int>::iterator i;
    for (i = D.begin(); i != D.end(); i++)
        cout << *i << " ";
    cout << "\nThe max size of " << D.max_size();
    return (0);
}