#include<stdio.h>
int main(){
	float n1, n2, n3, n4, m;
	printf("digite seu numero: ");
	scanf("%f", &n1);
	
	printf("digite seu numero: ");
	scanf("%f", &n2);
	
	printf("digite seu numero: ");
	scanf("%f", &n3);
	
	printf("digite seu numero: ");
	scanf("%f", &n4);
	
	m = (n1 + n2 + n3 + n4) / 4;
	
	printf("media aritmética: %.2f", m);
	
}
