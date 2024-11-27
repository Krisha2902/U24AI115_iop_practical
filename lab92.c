#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the element:");
    for(int i=0; i<5;i++){
    scanf("%d",&arr[i]);
    }
    int*ptr=arr;
    int max=0;
    for(int i=0; i<5;i++){
        if(max<*ptr){
            max=*ptr;
        }
          ptr++;
}
printf("the max number is:%d",max);
}