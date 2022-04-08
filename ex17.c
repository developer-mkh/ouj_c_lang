#include <stdio.h>

int main(void)
{
    int height;
    int mass;
    double bmi;

    printf("身長を入力してください (cm) >");
    scanf("%d", &height);
    printf("体重を入力してください (kg) >");
    scanf("%d", &mass);

    bmi = mass / ((height / 100.0) * (height / 100.0));

    printf("BMIは %f です。\n", bmi);

    return 0;
}