#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, i, num_menor = 0;
	
	/*printf("%.30i\n", num_menor);*/
	
	for(i = 1; i <= 15; i++){
		printf("%i ", i);
		printf("Digite seu número: ");
		scanf("%i", &num);
		
		if(num_menor > num || num_menor == 0){
			num_menor = num;
		}
	
	}
	
	printf("Seu menor número é: %i", num_menor);
}
