#include <stdio.h>

int main(void)
{
    double pi;

    printf("円周率はいくつですか >");
    scanf("%lf", &pi);

    if (3.1 < pi && pi < 3.15)
    {
        printf("正解です。\n");
    }
    else
    {
        printf("不正解です。\n");
    }

    return 0;
}