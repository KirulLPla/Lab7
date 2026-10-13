//Лабораторная работа 7

#include <stdio.h>
#include <math.h>

//Задание 2
int main() {
    float x;
    float y;
    char c;
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c) {
        case '+':
            printf("=%f\n", x+y);
            break;
        case '-':
            printf("=%f\n", x-y);
            break;
        case '*':
            printf("=%f\n", x*y);
            break;
        case '/':
            if (y!=0) {
                printf("=%f\n", x/y);
            }
            else {
                printf("Ошибка!\n");
            }
            break;
        case '^':
            printf("=%f\n", pow(x,y));
            break;
    }
    return 0;
}
