#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("整数1 > ");
    scanf("%d", &num1);
    printf("整数2 > ");
    scanf("%d", &num2);

    printf("%d + %d は %d\n", num1, num2, num1 + num2);
    printf("%d - %d は %d\n", num1, num2, num1 - num2);
    printf("%d * %d は %d\n", num1, num2, num1 * num2);
    printf("%d / %d は %d\n", num1, num2, num1 / num2);
    printf("%d %% %d は %d\n", num1, num2, num1 % num2);

    return 0;
}