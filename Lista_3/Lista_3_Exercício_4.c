/*)+ 4) Escreva um programa que leia três números e mostre-os em ordem crescente.*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

int a, b, c;

printf("Digite o primeiro numero: ");
scanf("%I", & a);
printf("Digite o segundo numeero: ");
scanf("%i", & b);
printf("Digite o terceiro numero: ");
scanf("%i", & c);

 if(a > c && b > c){
 	/*printf("Ordem crecente dos numeros: %i%i", b >= ) ? b,a : a,b );*/
 	 printf("Ordem crescente dos números digitados: %i %i %i", c , 
	  (b <= a ? b : a), (b <= a ? a : b));
    
 	 /* printf("Ordem crescente dos números: %d %d %d\n", 
            b >= a ? b : (a >= c ? a : c),
            (a >= b && a <= c) || (a <= b && a >= c) ? a : (b >= c ? b : c),
            c <= a && c <= b ? c : (a <= b ? a : b));*/
 }
 else{
 	printf("Ordem crecente dos números digitados: %i%i%i", (b <= a ? b : a), 
	 (a >= c) ? a :(b >= c) ? b : c, (a >= c) ? a :(b >= c) ? b : c );
 }


}


