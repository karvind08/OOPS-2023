#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> V(10);
    V = {"arvind", "kumar"};
    vector<string>::iterator i, j;
    for (i = V.begin(); i != V.end(); i++)
        cout << *i << " ";
    return (0);
}
