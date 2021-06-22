#include<iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    const int k=30 ;
    
    Demo()
    {
        i = 10;
        j = 20;
        // k = 30;      // Error
    }
};

int main()
{
    Demo obj;
    cout<<obj.k<<"\n";
    return 0;
}