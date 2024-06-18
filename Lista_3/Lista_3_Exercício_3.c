/* 3) Escreva um programa que leia dois números e mostre qual deles é o maior.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", & a);
	printf("Digite o segundo numero: ");
	scanf("%i", & b);
	
	printf("O numero maior é: %i", (a > b)? a : b);
	
}
