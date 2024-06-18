#include<stdio.h>
int main(){
	int a_degrau, altura;
	printf("Qual a altura dos degraus em cm? ");
	scanf("%d", &a_degrau);
	
	printf("Qual altura deseja chegar em cm? ");
	scanf("%d", &altura);
	
	printf("necessario subir %d", altura / a_degrau);
	printf(" degraus para chegar em %d", altura);
}
