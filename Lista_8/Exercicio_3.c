#include<stdio.h>
#include<locale.h>

float MediaPonderada(float x1, float x2, float x3);

float MediaPonderada(float x1, float x2, float x3){
	
	float P1, P2, P3;
	
	printf("Digite o peso da nota1:");
	scanf("%f", &P1);
	printf("Digite o peso da nota1:");
	scanf("%f", &P2);
	printf("Digite o peso da nota1:");
	scanf("%f", &P3);
	
	return ((x1 * P1) + (x2 * P2) + (x3 * P3))/(P1 + P2 + P3);	
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float N1, N2, N3, resp;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &N1); 
	printf("Digite sua segunda nota: ");
	scanf("%f", &N2);
	printf("Digite sau terceira nota: ");
	scanf("%f", &N3);	
	
	resp = MediaPonderada(N1, N2, N3);
	
	if(resp >= 6){
		printf("Aprovado!\nMedia: %.2f", resp);
	}
	else{
		printf("Reprovado!\nMedia: %.2f", resp);
	}
}
