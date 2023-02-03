#include <iostream>
using namespace std;
class A
{

public:
    int n;
    void show();
};

int main()
{
    // int A::*p = &A::n;
    int A::*p;
    p = &A::n;
    A A1;
    A1.*p = 10;
    cout << A1.*p << endl;
}

// int A::*  means pointer to member of A class
//&A::n means address of the n member of A class