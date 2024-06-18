/*Escreva um programa que leia uma sequência de 8 números inteiros e os armazene em uma
 matriz unidimensional (vetor). Em seguida, uma segunda matriz de mesma dimensão deve
 armazenar, nas posições equivalentes, o triplo de cada número lido. Ao final, o programa
 deve imprimir os dois vetores.*/
 
 #include<stdio.h>
 #include<locale.h>
 
 int main(){
 	
 	setlocale(LC_ALL, "portuguese");
 	
 	int v1[8], v2[8], i;
 	
 	for(i = 0; i < 8; i++){
 		printf("Digite seu número: ");
 		scanf("%d", &v1[i]);
	}
	
	for(i = 0; i < 8; i++){
		v2[i] = 3 * v1[i];
	}
 	
 	printf("primeira matriz unidimensional: \n");
 	
 	for(i = 0; i < 8; i++){
 		printf("%d\n", v1[i]);
	 }
	 
	 printf("Segunda matriz unidimensional: \n");
	 
	 for(i = 0; i < 8; i++){
	 	printf("%d\n", v2[i]);
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 	
 }
