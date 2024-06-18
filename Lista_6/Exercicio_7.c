#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[10], v2[10], i, j = 9;
	
	for(i = 0; i < 10; i++){
		printf("Digite seu número: ");
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 10; i++){
		
		v2[j] = v[i];
		j--;
		
	}
		printf("onder normal \n");
	
	
	for(i = 0; i < 10; i++){
		printf("%d\n", v[i]);
	}
		printf("onder inversa \n");
		for(i = 0; i < 10; i++){
		printf("%d\n", v2[i]);
	}
	
	
	
	
}
