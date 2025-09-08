#include <stdio.h>
#include <stdbool.h>

int primo(int numero){
    int contador = 0;
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            contador++;
        }
    }
    if (contador == 2){
        return true;
    }
    else{
        return false;
    }
}

int cada_numero(int max){
    for (int i = 0; i <= max; i++){
        if (primo(i) == true){
            printf("%d ", i);
        }
    }
    return 0;
}

int main (void){
    int x = 0;
    printf("Digite um número: ");
    scanf("%d", &x);
    
    if (primo(x)){
        printf("%d é primo\n", x);
    }
    else{
        printf("%d não é primo\n", x);
    }
    
    printf("Primos até %d: ", x);
    cada_numero(x);

    return 0;
}
