#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_x, num_y, maior, menor;
	
	printf("Digite seu primeiro n�mero: ");
	scanf("%i", &num_x);
	printf("Digite seu terceiro n�mero: ");
	scanf("%i", &num_y);
	
	printf("O n�mero maior � %i e o menor � %i \n", (num_x > num_y)? num_x, num_y : num_y, num_x);
	
	if(num_x > num_y){
		menor = num_y;
		maior = num_x;
		num_x--; 
		num_y++;
	}
	else{
		menor = num_x;
		maior = num_y;
		num_x++ ;
		num_y--;
	}
	
	printf("Intervalo entre os n�meros em orden crescente: ");
	for(menor; menor <= maior ;menor++){
		if(menor % 2 == 0){
			printf("%i", menor);
		}
	} 
	
}
