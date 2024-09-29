#include <stdio.h>
#define MAX 5

int soma_array(int *numeros) {
    int i, soma = 0;

    for(i = 0; i<MAX; i++){
        soma += numeros[i];
    }

    return soma;
}

int main() {
    int indice, soma;
    int numeros[MAX];


    for(indice = 0; indice<MAX; indice++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[indice]);
    }

    soma = soma_array(numeros);
    
    printf("Soma dos numeros: %d\n", soma);

    return 0;
}