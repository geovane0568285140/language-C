#include<stdio.h>
#include<locale.h>

int modulo(int num);

int modulo(int num){
	
	if(num >= 0){
		return num;
	}
	else{
		return num * -1;
	}
}
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int N1;
	
	printf("Digite seu n�mero: ");
	scanf("%d", &N1);
	
	printf("O modulo de %d � %d", N1, modulo(N1)); 
	
	
}
