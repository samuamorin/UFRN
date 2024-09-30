#include<stdio.h>

int pell(int n){

    if(n==0){
      return 0;
    }

    if(n==1){
      return 1;
    }

    return 2 * pell(n-1) + pell(n-2);

}


int main(){

   int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

   printf("p(%d) = %d", n, pell(n));

   return 0;
}