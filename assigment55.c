#include <stdio.h>
int main (){
    int odd=0,even=0,n[10];
    for(int i=0;i<10;i++)
    {
    printf("enter the element:");
    scanf("%d",&n[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(n[i]%2==0)
        {
            even++;
        }
        else
        {
        odd++;
        }
    }
    printf("numbers of even numbers:%d",even);
    printf("numbers of odd numbers:%d",odd);
 }