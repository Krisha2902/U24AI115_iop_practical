#include<stdio.h>
int fun(int a)
{    
    if(a%2==0){
    printf("even number");
    }
    else {
    printf("odd number");
    }
}
int main()
{
    int a;
    printf("enter the number a=");
    scanf("%d",&a);
    fun(a);
}