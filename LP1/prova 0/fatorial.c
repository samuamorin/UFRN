#include<stdio.h>

int calcula_fatorial(int x){
  int fatorial = x, i = x;

  while(i>1){
    i--;
    fatorial = fatorial * i;
  }

  return fatorial;
}

int main() {
    int x;

    printf("Informe o numero: ");
    scanf("%d", &x);

    printf("%d! = %d\n", x, calcula_fatorial(x));

    return 0;
}