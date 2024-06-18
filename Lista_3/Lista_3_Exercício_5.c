#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite seu numero: ");
	scanf("%i", &num);
	
	printf("Seu numero é %s", (num % 2) == 0 ? "par" : "impar");
}

