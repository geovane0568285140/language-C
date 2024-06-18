/* 6) Escreva um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, 
o programa deve verificar e mostrar qual a classificação dessa pessoa.

menor que 1,20: ate 60: A Entre 60 e 90 (inclusive): D Acima de 90: G
de 1,20 a 1,70: ate 60: B Entre 60 e 90 (inclusive): E Acima de 90: H
maior que 1,70: ate 60: C Entre 60 e 90 (inclusive): F Acima de 90: I
*/
#include<stdio.h>
#include<locale.h>
#include<math.h>	


int main(){
	setlocale(LC_ALL, "portuguese");
	
	
	  
	float altura, peso; 
	int pegaEssaPoha;

    printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	getchar();	
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);

	
	printf("%f\n", altura);
	printf("%f\n", peso);
	/*pegaEssaPoha  = (int)(altura * 10);
	altura = pegaEssaPoha / 10.0;
	printf("%i\n", pegaEssaPoha);
	printf("%f\n", altura);*/
	float tolerancia = 0.0001;
	
	
	if(altura < 1.20){
		printf("Sua classificação é: %s", peso < 60.0 ? "A" : peso <= 90.0 ? "D" : "G" 
		);
	}
	else if( abs(altura - 1.70) < tolerancia  /* altura <= 1.70 */){
		printf("Sua classificação é: %s", peso < 60.0 ? "B" : peso <= 90.0 ? "E" : "H");
	}
	else{
		printf("Sua calssificação é: %s",  peso < 60 ? "C" : peso <= 90 ? "F" : "I");
	}
	
}
