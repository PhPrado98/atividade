#include <stdio.h>

int main() {
    int ladoA, ladoB, ladoC;

    printf("Qual é o comprimento do primeiro lado: ");
    scanf("%d", &ladoA);
    printf("O do segundo lado: ");
    scanf("%d", &ladoB);
    printf("E do terceiro lado: ");
    scanf("%d", &ladoC);

    if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) {
        printf("O triângulo tá ok.\n");
    } else {
        printf("os valores não batem para esse triângulo ;-;.\n");
    }

    return 0;
}