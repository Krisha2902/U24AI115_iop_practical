#include <stdio.h>
int fun(int num)
{
int  rem=0,sum=0;
int x=num;
    while(num!=0)
    {
    rem=num%10;
    sum=sum*10+rem;
    num=num/10;
    }
    if(x==sum)
    {
    printf("palindrom number=%d",x);
    }
    else
    {
    printf("%d is not palindrom number",x);
    }
 }
int main() {
    int num,rem,sum=0,x;
    printf("enter the number=");
    scanf("%d",&num);
    fun(num);
}