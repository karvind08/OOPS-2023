#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v = {{1, 0, 1}, {0, 1, 3}, {1, 0, 1}};

    // Iterator for the 2-D vector
    vector<vector<int>>::iterator i1;

    // Iterator for each vector inside the 2-D vector
    vector<int>::iterator i2;

    // Traversing a 2-D vector using iterators
    for (i1 = v.begin(); i1 != v.end(); i1++)
    {
        for (i2 = i1->begin(); i2 != i1->end(); i2++)
            cout << *i2 << " ";
        cout << endl;
    }
}