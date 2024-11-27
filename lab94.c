#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char dest[100];
    printf("enter the string:");
    gets(str);
    char*ptr=str +strlen(str)-1;
    char*ptr1=dest;
    while(ptr>=str){
        *ptr1++ =*ptr--;
    }
    *ptr1='\0';
    printf("the reversed string is:%s",dest);
}