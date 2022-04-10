#include <stdio.h>

int main(void)
{
    double price;
    int year;

    printf("税抜き価格 > ");
    scanf("%lf", &price);
    printf("年度 > ");
    scanf("%d", &year);

    printf("\n税込み価格は%.0f円です。\n", year < 2020 ? price * 10.5 : price * 1.10);

    return 0;
}