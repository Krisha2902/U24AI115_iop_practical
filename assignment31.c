#include <stdio.h>
int main() {
    int num,sum=0,reminder;
    printf("enter the number:",num);
    scanf("%d",&num);
    while(num != 0){
    reminder=num%10;
    sum+=reminder;
    num/= 10;
    }
    printf("sum of the digits:%d\n",sum);
    return 0;
}
    