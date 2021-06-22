#include<iostream>

using namespace std;

class Base
{
public:
    int i,j;    // 8 Bytes
    Base(){i = 10; j = 20;}
    
    void fun(){ cout<<"Base fun\n"; }   // 1000
    virtual void gun() {cout<<"Base gun\n";}    // 2000
    virtual void sun() = 0;         // Pure virtual function
};

class Derived : public Base
{
public:
    int x,y;    // 8 Bytes (8+8)
    Derived(){x = 50; y = 60;}
    
    void fun() {cout<<"Derived fun\n"; }    // 3000
    void gun() { cout<<"Derived gun\n"; }   // 4000
    void sun() {cout<<"Derived sun\n"; }    // 7000
    virtual void run() {cout<<"Derived run\n"; }    // 8000
};

int main()
{
    // Base bobj;  // Error
    
    Base *bp2 = new Derived;    // Upcasting
    
    bp2->fun();     // Base fun
    bp2->gun();     // Derived gun
    bp2->sun();     // Derived sun
    
    return 0;
}