#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> V = {1, 2, 3};
    vector<int>::iterator i, j;
    i = V.begin();
    cout << *i << " ";
    j = V.end();
    cout << *j << " ";
    return (0);
}