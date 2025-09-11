#include <stdio.h>

int compra(int * conta, int valor){
    int pagar = 0;
    pagar = * conta - valor;
    
    return pagar;
}

int main()
{
    int conta_um = 0, conta_dois;
    int *ponteiro;
    int item = 0;
    
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta_um);
    
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta_dois);
    
    printf("Digite o valor do produto: ");
    scanf("%d", &item);
    
    if (conta_um > conta_dois){
        ponteiro = &conta_um;
        conta_um = compra(ponteiro, item);
    }
    else{
        ponteiro = &conta_dois;
        conta_dois = compra(ponteiro, item);
    }
    
    printf("Saldo conta 1: %d Saldo conta 2: %d", conta_um, conta_dois);
    
    return 0;
}
