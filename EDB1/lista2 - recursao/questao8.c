#include<stdio.h>

int verifica_digito(int n, int k){

    if(n==0){
      return 0;
    }

    if(n%10 == k){
      return 1 + verifica_digito(n/10, k);
    }

    return verifica_digito(n/10, k);

}


int main(){

   int n, k;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("Digite um digito a ser verificado em n: ");
  scanf("%d", &k);

   printf("%d possui %d digitos %d", n, verifica_digito(n, k), k);

   return 0;
}