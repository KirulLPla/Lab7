#include <stdio.h>

int main() {
    int x;

    printf("Введите степень: \n");
    if (scanf("%d", &x) != 1) {
    }

    printf("10^%d: ", x);

    switch (x) {
        case 12:
            printf("тера (Т)\n");
            break;
        case 9:
            printf("гига (Г)\n");
            break;
        case 6:
            printf("мега (М)\n");
            break;
        case 3:
            printf("кило (К)\n");
            break;
        case 2:
            printf("гекто (Г)\n");
            break;
        case 1:
            printf("дека (Д)\n");
            break;
        case 0:
            printf("единица\n");
            break;
        case -1:
            printf("деци (Д)\n");
            break;
        case -2:
            printf("санти (С)\n");
            break;
        case -3:
            printf("милли (М)\n");
            break;
        case -6:
            printf("микро (Мк)\n");
            break;
        case -9:
            printf("нано (Н)\n");
            break;
        case -12:
            printf("пико (П)\n");
            break;
        default:
            printf("неизвестна или не входит в диапазон пико...тера.\n");
            break;
    }

    return 0;
}

