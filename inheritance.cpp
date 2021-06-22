#include<iostream>
using namespace std;

class Demo
{
public:
    int i,j;
    Demo() 
{ 
cout<<"Inside Demo Constructor\n";
}
    ~Demo()
{
 cout<<"Inside Demo Destructor\n";
}
    int Add(int no1,int no2) 
{
return no1 + no2;
}
};
// Single level inheritance
class Hello : public Demo   // Inheritance  class Hello extends Demo
{
public:
    int x,y;
    Hello() 
{
 cout<<"Inside Hello Constructor\n"; 
}
    ~Hello() 
{ 
cout<<"Inside Hello Destructor\n";
 }
    int Sub(int no1,  int no2) 
{
 return no1 - no2;
}
};

// Multilevel inheritance
class Maths : public Hello
{
public:
    int a;
int Mult(int no1,int no2)
{
return no1*no2;
}
};

// Multiple inheritance
class Maths : public Demo, Hello
{
public:
    int a;
    Maths()
{
cout<<"Inside maths constructor\n";
}
    ~Maths()
{
cout<<"Inside maths destructor\n";
}
    int Mult(int no1,int no2)
{
return no1*no2;
}
};

int main()
{
    /*
    Demo dobj;
    cout<<sizeof(dobj)<<"\n";
    cout<<dobj.Add(10,12)<<"\n";
    */
    
    Hello hobj;
    cout<<sizeof(hobj)<<"\n";
    cout<<"Addition is : "<<hobj.Add(10,20)<<"\n";
    cout<<"Substraction is : "<<hobj.Sub(15,5)<<"\n";
    
    return 0;
}