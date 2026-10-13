//Лабораторная работа 7
#include <stdio.h>

//Задание 1
int main() {
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    switch(c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("Это цифра\n");
            break;
            default:
            if ((c>='a' && c<='z') || (c>='A' && c<='Z')) {
                printf("Это буква\n");
            }
              else {
                  printf("Неизвестный символ\n");
            }
            break;
    }
    return 0;
}

