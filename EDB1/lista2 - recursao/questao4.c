#include<stdio.h>

int calcula_multiplica(int k, int n){
  
  if(n==0){
    return 0;
  }

  return k + calcula_multiplica(k, n-1);
}


int main(){

   int n, k;

    printf("Digite o fator: ");
    scanf("%d", &k);
    printf("Digite o fator: ");
    scanf("%d", &n);


    printf("%d", calcula_multiplica(k,n));


}