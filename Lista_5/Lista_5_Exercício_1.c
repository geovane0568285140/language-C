#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, mult, i, a;
	
	for(a ; a == 1;){
	  printf("Digite um numero de 1 a 9: ");
	  scanf("%i", &num);
	  if(num >= 1 && num <= 9){
	  	a++;
	  }
	}
	
	for(i; i <= 10 ; i++){
		printf(" %i X %i = %i\n", num, i , mult = num * i );	
	}
	
	
	
}
