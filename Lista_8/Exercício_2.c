#include<stdio.h>
#include<locale.h>
#include<math.h>

float dist(float y1, float x1, float y2, float x2);

float dist(float y1, float x1, float y2, float x2){
	float dist;
	double convert;
	dist = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1,2));
	return dist;
}

int main(){

setlocale(LC_ALL, "portuguese");

float x1, x2, y1, y2;


printf("Digite a condenada de x1: ");
scanf("%f", &x1);
printf("Digite a condenada de y1: ");
scanf("%f", &y1);
printf("Digite a condenada de x2: ");
scanf("%f", &x2);
printf("Digite a condenada de y2: ");
scanf("%f", &y2);


printf("A distancia euclidiana é: %.2f", dist(y1, x1, y2, x2));


	
}
