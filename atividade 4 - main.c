/* Crie um programa que receba o valor de uma conta em um restaurante e a 
porcentagem de gorjeta que o cliente deseja dar. 
O programa deve calcular e exibir o valor total a ser pago, 
incluindo a gorjeta. Considere:
Gorjeta = ( (porcentagem da gorjeta/100) x valor da conta)
Total a ser pago = valor da conta + gorjeta */

#include <stdio.h>

int main(){
    float valorConta, porcentagem, gorjeta, totalPagar;
    
    printf("digite o valor da conta R$\n");
    scanf("%f", &valorConta);
    
    printf("digite o valor da porcentagem\n");
    scanf("%f", &porcentagem);
    
    gorjeta = ((porcentagem/100) * valorConta);
    
    totalPagar = valorConta + gorjeta;
    
    printf("total : %.2f", totalPagar);
    
    
    
}