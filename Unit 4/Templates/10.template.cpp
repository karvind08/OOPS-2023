#include <iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout << "Template Display: " << x << endl;
}
void display(int x)
{
    cout << "Function Display: " << x << endl;
}
int main()
{
    display(4);
    display(4.7);
    display("Arvind");
    return (0);
}