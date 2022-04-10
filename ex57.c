#include <stdio.h>

int is_prime(int);

int main(void)
{
    int n;

    printf("3以上の整数を入力してください > ");
    scanf("%d", &n);

    printf("%d は", n);
    if (is_prime(n))
    {
        printf("素数です。\n");
    }
    else
    {
        printf("素数ではありません。\n");
    }

    return 0;
}

int is_prime(int x)
{
    int ret = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            ret = 0;
            break;
        }
    }

    return ret;
}
