#include <stdio.h>
int main (){
    int sum=0,n[10];
    printf("enter the 10 elements:");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&n[i]);
    sum+=n[i];
    }
    printf("sum of all number=%d",sum);
    return 0;
}