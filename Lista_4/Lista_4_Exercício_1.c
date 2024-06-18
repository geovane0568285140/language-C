#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, mult = 0, teste;
	
	printf("Digite seu numero: ");
	scanf("%i", &num);
	
	while(num < 1000){
	
	
	if(num < 1000){
	  printf("%i\n ", num);	
	 }
	 	
	num = num  + 7;
	
	}
	
	num = num / 7;
	printf("O multiplo de 7 é: %i", num);
	
}
