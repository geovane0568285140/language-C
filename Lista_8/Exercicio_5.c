#include<stdio.h>
#include<locale.h>

void Valor(float N1, float N2, float N3);

void Valor(float N1, float N2, float N3){
	
	if(N1 > N2 && N1 > N3){
		printf("O maior valor lido foi: %.2f\n", N1);
		printf("O menor valor lido foi: %.2f", (N2 < N3)? N2 : N3);
	}
	else if(N2 > N3){
		printf("O maior valor digitado é: %.2f\n", N2);
		printf("O menor valor digitado é: %.2f", (N3 < N1)? N3 : N1 );
	}
	else{
		printf("O maior valor digitado é: %.2f\n", N3);
		printf("O menor valor digitado é: %.2f", (N1 < N2)? N1 : N2);
	}
}
	

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float V1, V2, V3;
	
	printf("Digite seu primeiro valor: ");
	scanf("%f", &V1);
	printf("Digite seu segundo valor: ");
	scanf("%f", &V2);
	printf("Digite seu terceiro valor: ");
	scanf("%f", &V3);
	
	Valor(V1, V2, V3);
	
}




