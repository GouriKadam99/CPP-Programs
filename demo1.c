#include<stdio.h>

int Add(int , int);
int Sub(int , int);

int main()
{
    int x = 0, y = 0, ret = 0;
    
    printf("Enter first number\n");
    scanf("%d",&x);
        
    printf("Enter second number\n");
    scanf("%d",&y);
    
    ret = Add(x,y);
    printf("Addition is : %d\n",ret);
    
    ret = Sub(x,y);
    printf("Substraction is : %d\n",ret);
    
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