#include <stdio.h>

int main(void)
{
    char pref;

    printf("出身都道府県の頭文字を答えてください >");
    scanf("%c", &pref);

    if (pref == 'e' || pref == 'E')
    {
        printf("あなたは愛媛県出身ですね。\n");
    }
    if (pref == 'w' || pref == 'W')
    {
        printf("あなたは和歌山県出身ですね。\n");
    }

    return 0;
}