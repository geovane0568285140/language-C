#include<stdio.h>
int main(){
	float B, A;
	printf("Digite a base do triangulo: ");
	scanf("%f", &B);
	
	printf("Digite a altura do triangulo: ");
	scanf("%f", &A);
	
	printf("Area do triangulo e igual a: %.1f", (B * B) / 2 );
}
