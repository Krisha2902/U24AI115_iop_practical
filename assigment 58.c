#include <stdio.h>

int main()
{
    int integer1[10], integer2[10], integertotal[10];
    int i, j, index;

    for (i = 0; i < 10; i++)
        integer1[i] = 2 * (i + 4);
    for (i = 0; i < 10; i++)
        printf("    %d", integer1[i]);

    printf("\n");

    for (j = 0; j < 10; j++)
        integer2[j] = 3 * (j + 3);
    for (j = 0; j < 10; j++)
        printf("    %d", integer2[j]);

    printf("\n");

    for (index = 0; index < 10; index++)
        integertotal[index] = integer1[i] * 12 + integer2[j] * 10;
    for (index = 0; index < 10; index++)
        printf("   %d", integertotal[index]);

    printf("\n\n");

    for (index = 0; index < 10; index++)
        printf("%d %d+%d=%d\n", index, integer1[i], integer2[j], integertotal[index]);
}