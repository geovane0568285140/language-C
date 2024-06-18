#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float med;
	int num = 1, nuMD=0, soma = 0;

	
	while(num != 0){
		soma = soma + num;
		nuMD++;
	
		printf("digite seu numero: ");
		scanf("%i", &num);
		
		printf("%i\n", num);
		printf("%i\n", nuMD);
		printf("%i\n", soma); 
		
	}
	soma--;
	nuMD--;
	med = soma / nuMD;
	
	printf("A media é: %.2f", med);
	
	
}
