#include<stdio.h>
int main(){
	int h, hm, m;
	printf("digite a hora: " );
	scanf("%d", &h);
	printf("digite os minutos: ");
	scanf("%d", &hm);
	
	m = h * 60;
	
	printf("O total de minutos: %d", hm + m );
}	
