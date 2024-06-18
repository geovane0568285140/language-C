
#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num = 1, num2 = 0, numAnter =0 ;
	
	while(num > 0){
		
		printf("digite seu número ");
		scanf("%i", &num);
		
		
		if(num < numAnter && num != 0 || numAnter == 0){
			if(num < num2 || num2 == 0 ) {
			
			num2 = num;	
				
			}
		}
		else{
			printf("false\n");
		}
    numAnter = num;
	}
	
	printf("O menor Numero é: %i", num2);
}
