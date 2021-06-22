#include<iostream>
using namespace std;

class Demo
{
public:
    int i,j;
    
    Demo(int a, int b)
    {
        i = a;
        j = b;
    }
};

class Hello : public Demo
{
public:
    int x,y;
    Hello(int no1, int no2) : Demo(no1,no2)
    {
        x = no1;
        y = no2;
    }
};

int main()
{
    Hello hobj(10,20);      // 30 -> 17 -> 21 -> 10 ->21 -> 30

    return 0;
}