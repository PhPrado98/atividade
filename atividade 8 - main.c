#include <stdio.h>
int main() {
    int Num, NumInt;
    int NDiviS = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &Num);

    if (Num <= 1) {
        printf("O número deve ser maior que 1 para ser considerado primo.\n");
        return 0;
    }

    printf("Divisores de %d: ", Num);
    for (NumInt = 1; NumInt <= Num; NumInt++) {
        if (Num % NumInt == 0) {
            printf("%d ", NumInt);
            NDiviS++;
        }
    }
    printf("\n");

    if (NDiviS == 2) {
        printf("%d  , esse número não é correspondente para ser um número primo .\n", Num);
    } else {
        printf("%d , esse número é correspondente para ser primo.\n", Num);
    }

    return 0;
}