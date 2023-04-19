#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v{{1, 0, 1}, {0, 1, 3}, {1, 0, 1}};

    // Iterator for the 2-D vector
    vector<vector<int>>::iterator it1;

    // Iterator for each vector inside the 2-D vector
    vector<int>::iterator it2;

    // Traversing a 2-D vector using iterators
    for (it1 = v.begin(); it1 != v.end(); it1++)
    {
        for (it2 = it1->begin(); it2 != it1->end(); it2++)
            cout << *it2 << " ";
        cout << endl;
    }
}