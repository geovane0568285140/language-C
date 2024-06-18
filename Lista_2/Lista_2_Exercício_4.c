#include<stdio.h>
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	printf("seu sucessor: %i\n", num + 1 );
	printf("seu antecessor: %i", num - 1 );
}
