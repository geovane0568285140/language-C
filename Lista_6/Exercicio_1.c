#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i, j;
	float v[10], num;
	
	for(i = 0; i < 10; i++){
		
		printf("Digite seu número: ");
		scanf("%f", &num);
		v[i] = num;
	}
	
	printf("Ordem inversa: \n");
	
	for(j = 9; j >= 0; j-- ){
		
		num = v[j];
		printf(" %.2f ", num);
		
	}
	
	
	
}
