#include<stdio.h>
#include<stdbool.h>

int TestePrimo(int);


int TestePrimo(int num){
    int cnt = 0, i;
    bool t = true;
  for(i = 2; i < num; i++){
      if((num % i) == 0){
          cnt++;
      }
  }
  return (cnt == 0)? t : false;
}

int main(){
    
    int numS;
    
    printf("Digite um n�mero para testar se ele � primo:");
    scanf("%d", &numS);
    
    printf("\n");
    if(TestePrimo(numS) == true){
        printf("O n�mero digitado � primo.");
    }
    else{
        printf("O n�mero digitado n�o � primo.");
    }
}
