#include <stdio.h>
int main() {
    int Num, soma = 0;

    printf("Coloque um número inteiro positivo: ");
    scanf("%d", &Num);

    if (Num <= 0) {
        printf("Diga um que seja um número inteiro positivo.\n");
        return 1; 
    }

    while (Num > 0) {
        soma += Num % 10;  
        Num /= 10;         
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}