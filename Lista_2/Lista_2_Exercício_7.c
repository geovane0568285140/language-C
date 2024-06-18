#include<stdio.h>
int main(){
	float kh;
	printf("Digite a velocidade em quilometros: ");
	scanf("%f", &kh);
	
	printf("A conversao de quilometros por hora para metros por segundos: %.2f", kh/3.6);
}
