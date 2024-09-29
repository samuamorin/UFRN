#include <stdio.h>
#define MAX 3

int somarDiagonal(int (*matriz)[MAX]) {
    int i, j, soma = 0;

    for(i = 0; i<MAX; i++){
        for(j = 0; j<MAX; j++){
            if(i==j){
                 soma += matriz[i][j];
            }
        }
    }

    return soma;
}

int main() {
    int i, j, soma;
    int matriz[MAX][MAX];


    for(i = 0; i<MAX; i++){
        for(j = 0; j<MAX; j++){
            printf("Digite o numero[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma = somarDiagonal(matriz);
    
    printf("Soma dos numeros: %d\n", soma);

    return 0;
}