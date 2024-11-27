#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string:");
    gets(str);
    char*ptr=str;
    int length_incl=0;
    int length_excl=0;
    while(*ptr != '\0'){
        (length_incl)++;
        if(*ptr != ' '){
            (length_excl)++;
        }
    }
    printf("length including spaces:%d\n",length_incl);
    printf("length including without spaces:%d\n",length_excl);
}   