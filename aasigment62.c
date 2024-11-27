#include <stdio.h>  
 int main()
{

    int count;
    int MAX_SIZE = 20;
    char c;
    char arr[MAX_SIZE];
    char revArr[MAX_SIZE];

    while(c != EOF)
    {
        count = 0; 
        c = getchar();
        arr[count++] = c;

        getReverse(revArr, arr);

        printf("%s", revArr);

        if (c == '\n')
        {
            printf("\n");
            count = 0; 
        }
    }
}


void getReverse(char dest[], char src[])
{


    int i, j, n = sizeof(src); 

    for (i = n - 1, j = 0; i >= 0; i--)
    {
        j = 0;
        dest[j] = src[i];
        j++;    
    }
}  