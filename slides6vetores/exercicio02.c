#include <stdio.h>

int main(void) {
    int vet[5];
    int i, indice;

    for (i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Vetor inicial: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    printf("Digite o indice a remover (0 a 4): ");
    scanf("%d", &indice);

    if (indice >= 0 && indice < 5) {
        for (i = indice; i < 4; i++) {
            vet[i] = vet[i + 1];
        }
        vet[4] = 0;
    } else {
        printf("Indice invalido!\n");
    }

    printf("Vetor apos remocao: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
