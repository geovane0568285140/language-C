#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite seu n�mero: ");
	scanf("%i", &num);
	
	while(num > 0){
		
		if((num % 2) != 0){
			printf("%i ", num);
		}
		/* else{
			printf("a");
		}			*/

		num--;
	}
	
	printf("Fim...");
	
	
}
