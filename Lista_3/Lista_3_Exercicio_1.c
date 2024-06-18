/* 1) Escreva um programa que leia dois valores inteiros e efetue a soma entre eles. Caso o valor 
resultante da soma seja maior ou igual a 10, some 5 a este resultado e apresente-o na tela. Caso o 
valor resultante da soma seja menor que 10, subtraia 7 do resultado e imprima-o na tela.*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int a, b;
	
	printf("Digite seu primeiro numero");
	scanf("%i", &a);
	printf("Digite seu segundo numero");
	scanf("%i", &b);
	
	
  if((a +b) >= 10 ){
  	printf("A soma dos numeros e maior ou igual a 10, soma dos numeros: %i", a + b + 5);
  }else{
  	printf("A soma dos numeros e menor que 10, subtração dos numeros: %i", a + b - 7);
  }
	
	
	
}

