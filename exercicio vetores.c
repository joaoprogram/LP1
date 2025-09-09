#include <stdio.h>

int main(void) {
    signed char temps[50];
    int i, aux, soma = 0, acima = 0;
    float media;

    for (i = 0; i < 50; i++) {
        scanf("%d", &aux);
        temps[i] = aux;
        soma += temps[i];
    }

    media = soma / 50.0;

    for (i = 0; i < 50; i++)
        if (temps[i] > media)
            acima++;

    printf("%.2f\n%d\n", media, acima);
    return 0;
}
