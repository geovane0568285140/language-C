#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int x = 1, y = 2;
	
	while(x < y){
	 printf("Digite o n�mero x: ");
	 scanf("%i", &x);
	 printf("Digite o n�mero y: ");
	 scanf("%i", &y);
	
	 if(x <= y){
	 printf("X deve ser maior que Y!\n");	
	 } 
	 else if(x - y == 1 || y -x == 1){
	 	printf("O intervaldo entre %i e %i n�o existe, digite outros n�meros\n", x, y);
	 	x = 1;
		y = 2;  
	 }
	  
	}
	
	printf("O intervalo entre dois n�meros �: \n");
	x--;
	y++;
	 while(x >= y){
		printf("%i ", y);
		y++;	
	}
	
	
}
