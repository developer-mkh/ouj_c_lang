#include <stdio.h>
int main(void)
{
    int koku = 75; /* 国語の得点 */
    int san = 93;  /* 算数の得点 */
    int sya = 68;  /* 社会の得点 */
    int sum = 0;

    sum = koku + san + sya;
    printf("国語は%d点、算数は%d点、社会は%d点です。\n", koku, san, sya);
    printf("平均点は%d点です。\n", (int)(sum / 3.0 + 0.5));

    return 0;
}