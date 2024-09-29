#include<stdio.h>

int fatorial_duplo(int n){
  
  if(n==1){
    return 1;
  }

  return n * fatorial_duplo(n-2);
}


int main(){

   int n;

    printf("Digite um numero impar: ");
    scanf("%d", &n);

    if(n%2==0){
      printf("Erro: numero informado nao e impar");
    }else{
      printf("%d!! = %d", n, fatorial_duplo(n));
    }

   return 0;
}