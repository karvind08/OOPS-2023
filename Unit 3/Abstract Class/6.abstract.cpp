#include <iostream>
using namespace std;
class Shape
{
protected:
    int h, b;

public:
    virtual void area() = 0;
    void getdata(int x, int y)
    {
        h = x;
        b = y;
    }
};
class Rectangle : public Shape
{
public:
    void area()
    {
        int a = h * b;
        cout << "The area of rectangle is: " << a << endl;
    }
};
class Triangle : public Shape
{
public:
    void area()
    {
        int a = h * b / 2;
        cout << "The area of Triangle is: " << a << endl;
    }
};
int main()
{
    Rectangle R1;
    R1.getdata(5, 7);
    R1.area();
    Triangle T1;
    T1.getdata(8, 4);
    T1.area();
    return (0);
}