#include <stdio.h>

int main(void)
{

    int score;

    printf("得点を入力してください(0-100) > ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("あなたの成績は S です。\n");
    }
    else if (score >= 80)
    {
        printf("あなたの成績は A です。\n");
    }
    else if (score >= 70)
    {
        printf("あなたの成績は B です。\n");
    }
    else if (score >= 60)
    {
        printf("あなたの成績は C です。\n");
    }
    else
    {
        printf("あなたの成績は D です。\n");
    }

    return 0;
}