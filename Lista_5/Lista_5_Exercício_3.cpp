#include<stdio.h>
#include<locale.h>

/* #define num_x 100;
#define num_y 1000; */

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, i, primo = 0;
	
	printf("Digite seu numero: ");
	scanf("%i", &num);
	for(primo = 1; primo <= num; primo++) {
 		if( 0 == (num % primo)){
			primo++;
		}	
		printf("%i ", primo);
	}
	
	if(primo <= (num + 2)){
	printf("Seu n�mero e primo");	
	}
	else{
		printf("Seu n�mero n�o � primo %i ", num);
	}
	
		
	
	
}
