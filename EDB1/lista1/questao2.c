#include <stdio.h>

void trocaPorReferencia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    //printf("Dentro da funcao: a = %d, b = %d, temp = %d\n", a, b, temp);
}

int main() {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo nu1mero: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    trocaPorReferencia(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}