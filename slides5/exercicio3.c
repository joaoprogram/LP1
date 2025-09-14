#include <stdio.h>

int compra(int *conta, int valor){
    int pagar = *conta - valor;
    *conta = pagar;
    return pagar;
}

int* comparador(int *x, int *y){
    if (*x > *y){
        return x;
    }
    else{
        return y;
    }
}

int main(void){
    int compras[] = { 100, 50, 80, 30, 20 };
    int quantidade = sizeof(compras) / sizeof(compras[0]);
    int conta_um, conta_dois;

    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta_um);

    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta_dois);

    for (int i = 0; i < quantidade; i++){
        int *maior_conta = comparador(&conta_um, &conta_dois);
        compra(maior_conta, compras[i]);

        printf("Após compra %d (R$ %d): conta_um=%d conta_dois=%d\n",
               i+1, compras[i], conta_um, conta_dois);
    }

    return 0;
}
