/*5. Escreva um programa que leia 9 números inteiros fornecidos pelo usuário, os armazene em
 uma matriz bidimensional quadrada e indique quais são números perfeitos e quais não são.
 OBS: número perfeito é aquele cuja soma de seus divisores, exceto ele mesmo, é igual ao
 próprio número. EX. 6 = 1+2+3.*/
 
 #include<stdio.h>
 #include<locale.h>
 
 int main(){
 	
 	setlocale(LC_ALL, "portuguese");
 	
 	int v[3][3], i, j, k, num, d,soma = 0;
 	float  divisao;
 	
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			printf("Digite seu número: ");
 			scanf("%d", &v[i][j]);
		 }
	 }
 	
 	printf("--Matriz--\n");
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			printf(" %d ", v[i][j] );
		 }
		 printf("\n");
	 }
 	
  	printf("Números perfeitos: \n");
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			for(k = (v[i][j] - 1); k > 0; k--){
 				if(v[i][j] % k == 0){
 					soma += k;
				 }
			 }
			 if(v[i][j] == soma ){
				 	printf("%d   %d\n", v[i][j], soma );
				 }
				 soma = 0;
		 }
	 } 
 	
 	printf("Números não perfeitos: \n");
 	
 	for(i = 0; i < 3; i++){
 		for(j = 0; j < 3; j++){
 			for(k = (v[i][j] - 1); k > 0; k--){
 				if(v[i][j] % k == 0){
 					soma += k;
				 }
			 }
			 if(v[i][j] != soma){
				 	printf("%d\n", v[i][j]);
				 }
				 soma = 0;
		 }
	 } 
 	
 	
 	
 	
 	
 	
 	
 }
