#include <stdio.h>
int main(void)
{
    int i = 101;

    while (1)
    {
        i--;

        if (i <= 0)
        {
            break;
        }

        if (i % 3 != 0 && i % 5 != 0)
        {
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");
    return 0;
}