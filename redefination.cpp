#include<iostream>

using namespace std;

class Base
{
public:
    int i,j;
    Base(){i = 10; j = 20;}
    
    void fun(){ cout<<"Base fun\n"; }    // Defination
    void gun() {cout<<"Base gun\n"; }   // Defination
};
class Derived : public Base
{
public:
    int x,y;
    Derived(){x = 50; y = 60;}
    
    void sun() { cout<<"Derived sun\n"; }   // Defination
    void gun() {cout<<"Derived gun\n"; }    // Redefination
};
int main()
{
    Base bobj;
    Derived dobj;
    
    bobj.fun();     // Base fun
    bobj.gun();     // Base gun
    
    dobj.fun();         // Base fun
    dobj.sun();         // Derived sun
    dobj.gun();         // Derived gun
    dobj.Base::gun();         // Base gun

    return 0;
}