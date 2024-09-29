#include<stdio.h>

int calcula_potencia(int k, int n){
  
  if(k==0){
    return 0;
  }

  if(n==0){
    return 1;
  }

  return k * calcula_potencia(k, n-1);
}


int main(){

   int n, k;

    printf("Digite a base: ");
    scanf("%d", &k);
    printf("Digite o expoente: ");
    scanf("%d", &n);


    printf("%d", calcula_potencia(k,n));


}