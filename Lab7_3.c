//Лабораторная работа 7
#include <stdio.h>

//Задание 3
int main() {
    int number;
    printf("Введите число в диапазоне (10-20): ");
    scanf("%d", &number);
    switch (number) {
        case 10:
            printf("ten\n");
            break;
        case 11:
            printf("eleven\n");
            break;
        case 12:
            printf("twelve\n");
            break;
        case 13:
            printf("thirteen\n");
            break;
        case 14:
            printf("fourteen\n");
            break;
        case 15:
            printf("fifteen\n");
            break;
        case 16:
            printf("sixteen\n");
            break;
        case 17:
            printf("seventeen\n");
            break;
        case 18:
            printf("eighteen\n");
            break;
        case 19:
            printf("nineteen\n");
            break;
        case 20:
            printf("twenty\n");
            break;
            default:
            printf("Ошибка!");
            break;
    }
    return 0;
}
