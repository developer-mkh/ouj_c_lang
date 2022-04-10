#include <stdio.h>

int plus5(int);

int main(void)
{
    int x;
    printf("整数を入力してください > ");
    scanf("%d", &x);

    printf("%d に 5 を足すと %d です。\n", x, plus5(x));

    return 0;
}

int plus5(int num)
{
    return num + 5;
}