#include<iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    const int k;
    
    // Base member initialisation
    Demo(int no1,int no2, int no3) : i(no1),j(no2),k(no3)
    {
        cout<<"Constructor\n";
    }
};

int main()
{
    Demo obj1(10,20,30);
    Demo obj2(50,60,70);
    cout<<obj1.i<<"\n";     // 10
    cout<<obj1.j<<"\n";     // 20
    cout<<obj1.k<<"\n";     // 30
        
    return 0;
}