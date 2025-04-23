#include <stdio.h>

int main() {
    int num, maisFreq = -1, contgm = 0, maiorFreq = 0;
    int freq[1000] = {0}; 

    printf("Digite uma sequência de números inteiros positivos (digite 0 para terminar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0 && num < 1000) {
            freq[num]++;

            if (freq[num] > maiorFreq || 
               (freq[num] == maiorFreq && num < maisFreq)) {
                maiorFreq = freq[num];
                maisFreq = num;
            }
        } else {
            printf("Número inválido. Por favor, insira um número positivo entre 1 e 999.\n");
        }
    }

    if (maisFreq!= -1) {
        printf("O número mais frequente é %d, que foi digitado %d vezes.\n", maisFreq, maiorFreq);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}