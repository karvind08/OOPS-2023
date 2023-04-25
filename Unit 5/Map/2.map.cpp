#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> M = {{1, "ABC"}, {2, "DEF"}, {3, "GHI"}};
    map<int, string>::iterator i, j;
    for (i = M.begin(); i != M.end(); i++)
        cout << (*i).first << ": " << (*i).second << endl;
    return (0);
}