#include<iostream>
using namespace std;

// Encapsulation
class Arithematic
{
public:     // Access Specifier
    int i,j;    // Characteristics
    
    // Behaviour
    int Addition(int no1, int no2)
    {
        cout<<"Inside int Addition(int,int)"<<"\n";
        return no1 + no2;
    }
    
    int Addition(int no1, int no2, int no3)
    {
        cout<<"Inside int Addition(int,int,int)"<<"\n";
        return no1 + no2 + no3;
    }
    
    float Addition(float no1, float no2)
    {
        cout<<"Inside float Addition(float,float)"<<"\n";
        return no1 + no2;
    }
};

int main()
{
    Arithematic obj;
    
  cout<<obj.Addition(10,20)<<"\n";
    cout<<obj.Addition(10,20,60)<<"\n";
    cout<<obj.Addition((float)10.5,(float)20.5)<<"\n";

  /*int iret=0;
float fret=0.0;

iret=obj.Addition(10,20);
cout<<iret<<"\n";
iret=obj.Addition(10,20,50);
cout<<iret<<"\n";
fret=obj.Addition((float)10.5,(float)20.5);
cout<<fret<<"\n";*/

    return 0;
}