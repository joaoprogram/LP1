#include <stdio.h>

void preenche(int *xs, int n){
    for (int i = 0; i < n; i++){
        scanf("%d", (xs + i));
    }
}

float media(int *xs, int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += *(xs + i);
    }
    return (float)soma / n;
}

int main(void){
    int vec[100];
    int n;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    preenche(vec, n);

    float m = media(vec, n);

    printf("Media = %.2f\n", m);

    return 0;
}
