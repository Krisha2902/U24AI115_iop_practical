#include<stdio.h>
int main()
{
    int size = 4;  
    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    printArr(a,"a",size);
    printArr(b,"b",size);
    swapArray(a,b);
    printf("Swapped:\n");
    printArr(a,"a",size);
    printArr(b,"b",size);
}
and this function:

 void swapArray(int **a,int **b)
{
    int *p = *a;
    *a = *b;
    *b = p;
}
while printArr simply prints the array:

void printArr(int arr[],char name[],int size)
{
    printf("%s:\t",name);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}