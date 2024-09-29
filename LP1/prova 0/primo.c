#include<stdio.h>

int eh_primo(int x){
  int divisor = x - 1;

  int achou_outro_divisor = 0;

  if(x == 2){
    achou_outro_divisor =  0;
  }else if(x%2==0){
    achou_outro_divisor  = 1;
  }else{
    while(divisor>1){
       if(x%divisor==0){
          achou_outro_divisor  = 1;
          break;
       }
       divisor --;
    }
  }

  return !achou_outro_divisor;
}

int main() {
    int x, primo;

    printf("Informe o numero: ");
    scanf("%d", &x);


    if(eh_primo(x)){
      printf("Numero primo");
    }else{
      printf("Numero nao e primo");
    }

    return 0;
}