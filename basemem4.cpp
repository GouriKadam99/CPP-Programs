#include<iostream>
using namespace std;
class Demo
{
public:
    int i,j;
    Demo(int x)
    {
        i = x;  j = x;
    }
};
class Hello : public Demo
{
public:
    int x,y;
    Hello(int no1, int no2): Demo(51)
    {
        x = no1;
        y = no2;
    }
};
class ABC : public Hello
{
public:
    int a;
    ABC() : Hello(11,21)
    {a =101;}
};
ABC obj();

int main()
{
    Hello hobj(10,20);      // 30 -> 17 -> 21 -> 10 ->21 -> 30

    return 0;
}