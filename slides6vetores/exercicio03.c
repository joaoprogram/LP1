#include <stdio.h>

#define L 3   // número de linhas
#define C 4   // número de colunas

void preenche(int arr[L][C], int l, int c){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

float media(int arr[L][C], int l, int c){
    int soma = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            soma += arr[i][j];
        }
    }
    return (float)soma / (l * c);
}

int main(void){
    int arr[L][C];
    
    printf("Digite os elementos do array (%dx%d):\n", L, C);
    preenche(arr, L, C);
    
    float m = media(arr, L, C);
    printf("Media = %.2f\n", m);
    
    return 0;
}
 
