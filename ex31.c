#include <stdio.h>
int main(void)
{
    int a, b;
    printf("整数を2つ入力してください。\n");
    printf("1つ目 > ");
    scanf("%d", &a);
    printf("2つ目 > ");
    scanf("%d", &b);

    if (a < b)

    {
        int tmp; /* ① */
        tmp = a; /* ② */
        a = b;   /* ③ */
        b = tmp; /* ④ */
    }
    printf("大きい方は%d、小さい方は%dです。\n", a, b);

    return 0;
}