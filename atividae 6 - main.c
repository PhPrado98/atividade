#include <stdio.h>

int main() 
{
    int NumPri;
    int divisores = 0;
    int valor = 1;
    
    scanf("%d", &NumPri);
    
    while( NumPri % valor == 0 ){
        divisores++;
        printf("divisores: %d\n", divisores);
        valor++;
    }
    
    if (divisores == 2){
        printf("eh primo\n");
    } else {
        printf("nao eh primo\n");
    }

    return 0;
}