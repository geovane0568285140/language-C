#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num = 100,num_x;
	
	printf("Digite um número: ");
	scanf("%i", &num_x);
	
	while(num < 1000){
		
		num = num + num_x;o
		if(num < 1000)
		printf("%i ", num);
	}
	
}
