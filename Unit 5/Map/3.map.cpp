#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> M;
    map<int, int>::iterator i;
    M.insert(pair<int, int>(1, 20));
    M.insert(pair<int, int>(2, 25));
    for (i = M.begin(); i != M.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    return (0);
}