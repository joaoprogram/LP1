#include <stdio.h>

int main (void){
    int a = 0, b = 0;
    int *p;
    int resultado1 = 0;
    int resultado2 = 0;
    
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    
    printf("Valores iniciais de A e B são: %d %d\n", a, b);
    
    if (a > b){
        p = &a;
        resultado1 = *p - 50;
        a = resultado1;
    }
    else {
        p = &b;
        resultado2 = *p - 50;
        b = resultado2;
    }
    
    printf("Valores finais de A e B são: %d %d\n", a, b);
    
    return 0;
}
