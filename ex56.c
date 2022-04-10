#include <stdio.h>

int myabs(int);

int main(void)
{
    int x;
    printf("整数を入力してください > ");
    scanf("%d", &x);

    printf("%d の絶対値は %d です。\n", x, myabs(x));

    return 0;
}

int myabs(int num)
{
    int ret = num;

    if (ret < 0)
    {
        ret *= -1;
    }

    return ret;
}