#include<stdio.h>
#include<locale.h>

int TestePrimo(int N1);

int TestePrimo(int N1){
	
	int teste = 2, i, divisor = 2;
	
	for(i = (N1 - 2); i > 0; i--){
		if(0 == (N1 % divisor)){
		teste++;	
		}
		divisor++;
	}
	
	return teste;
	
}


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite seu n�mero: ");
	scanf("%d", &num);
	
	if(TestePrimo(num) == 2){
		printf("seu n�mero � primo: %d", num);
	}
	else{
		printf("seu n�mero n�o � primo: %d", num);
	}
	
}
