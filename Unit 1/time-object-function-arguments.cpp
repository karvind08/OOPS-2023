#include <iostream>
using namespace std;
class Time
{
    int hours, minutes;

public:
    void gettime(int, int);
    void display();
    void sum(Time, Time);
};

void Time::gettime(int x, int y)
{
    hours = x;
    minutes = y;
}
void Time::display()
{
    cout << hours << " Hours : " << minutes << " Minutes " << endl;
}
void Time::sum(Time T3, Time T4)
{
    minutes = T3.minutes + T4.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + T3.hours + T4.hours;
}
int main()
{
    Time T1, T2, T;
    T1.gettime(2, 30);
    T1.display();
    T2.gettime(3, 40);
    T2.display();
    T.sum(T1, T2);
    T.display();
    return (0);
}