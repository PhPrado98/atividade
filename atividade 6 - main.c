
#include <stdio.h>

int main(){
    float dis, vel, tem;
    
    printf("qual é a distância da viagem ?  =  ");
    scanf("%f", &dis);
    
    printf("qual é a velocidade média o carro ?  =  ");
    scanf("%f", &vel);

tem = dis / vel;

    printf("o tempo dessa viagem será = %.2f\n", tem);
    
    printf("dis = %.2f, vel = %.2f, tem = %.2f\n",dis,vel,tem);

    return 0;
}