#include <stdio.h>

int main(void)
{
    int i;
    int j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("o");
        }
        printf("\n");
    }
    return 0;
}