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

cout<<"Function calls using pointer and dynamic memory allocation\n";
    Base *bp1 = new Base;               // No casting
    Derived *dp1 = new Derived;         // No casting
    
    bp1->fun();     // Base fun
    bp1->gun();     // Base gun
dp1->fun();         // Base fun
    dp1->sun();         // Derived sun
    dp1->gun();         // Derived gun
    dp1->Base::gun();         // Base gun
    
    Base *bp2 = new Derived;    // Upcasting
    //Derived *dp2 = new Base;    // Downcasting  NA
    
    // Compiler calls the function of pointer type
    bp2->fun();         // Base fun
    bp2->gun();         // Base gun     (We expect Derived gun) -> virtual
   // bp2->sun();         // Error

    return 0;
}