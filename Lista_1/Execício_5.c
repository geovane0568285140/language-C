#include<stdio.h>
int main(){
	int nascimento, ano_atual;
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	
	printf("Voce tem %d", ano_atual - nascimento );
	printf(" anos de idade\n");	
	printf("Em 2030 vai estar com %d", 2030 - nascimento );
	printf(" anos de idade");
}
