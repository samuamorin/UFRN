#include<stdio.h>

int fatorial(int n){

    if(n==0||n==1){
      return 1;
    }

    return n * fatorial(n-1);

}

int super_fatorial(int n){
  
  if(n==1){
    return 1;
  }

  return fatorial(n) * super_fatorial(n-1);
}


int main(){

   int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

   printf("sf(%d) = %d", n, super_fatorial(n));

   return 0;
}