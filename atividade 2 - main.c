#include <stdio.h>

int main(){
    float c, f;
    scanf ("%d", &c);
    f = (c * 1.8) + 32;
    printf ("f = %.2f, c = %.2f" , f, c);
    return 0;
}