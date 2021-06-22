#include<iostream>
using namespace std;

int Add(int,int);
int Sub(int,int);

int main()
{
    int x = 0, y = 0, ret = 0;
    
    cout<<"Enter first number\n";
    cin>>x;
    cout<<"Enter second number\n";
    cin>>y;
    
    ret = Add(x,y);
    cout<<"Addition is : "<<ret<<"\n";
    
    ret = Sub(x,y);
    cout<<"Substraction is : "<<ret<<"\n";
    return 0;
}

int Add(int no1, int no2)
{
    int result = 0;
    result = no1 + no2;
    return result;
}

int Sub(int no1, int no2)
{
    int result = 0;
    result = no1 - no2;
    return result;
}