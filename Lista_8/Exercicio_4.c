#include<stdio.h>
#include<locale.h>

int k = 0, i = 0;

void triplo(int vt[k]);
void dobro(int vd[k]);

void dobro(int vd[k]){
	printf("O dobro dos n�meros �\n");
	for(i = 0; i < k; i++){
		printf("         %d\n", (vd[i] * 2));
	}
}

void triplo(int vt[k]){
	printf("O triplo dos n�meros �\n");
	for(i = 0; i < k; i++){
		printf("         %d\n", (vt[i] * 3));
	}
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int  v[k], parar, num = 1;
	while(num != 0){
		printf("Digite seu n�mero ou zero para terminar a execu��o:");
		scanf("%d", &num);
		if(num != 0){
		k++;
		v[i] = num;	
		}
		i++;
	} 
	
	printf("N�meros digitados foram: ");
	for(i = 0; i < k; i++){
		printf(" %d ", v[i]);
	}
	printf("\n");
	
	dobro(v);
	triplo(v);
	 
}


