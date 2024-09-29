#include <stdio.h>
#define MAX 5

int somar(int numeros[], int tamanho) {

    if(tamanho==0){
        return 0;
    }

    return numeros[tamanho -1] + somar(numeros, tamanho -1);
}

int main() {
    int soma;
    int numeros[MAX] = {1,2,3,4,5};

    soma = somar(numeros, MAX);
    
    printf("Soma dos elementos do vetor: %d\n", soma);

    return 0;
}