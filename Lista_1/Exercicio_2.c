#include<stdio.h>
int main(){
    float salario, porcento;
   printf("digite seu salario ");
   scanf("%f", &salario);
   
   porcento = salario * 0.25;
   printf("salario com o aumento de 25 porcento	R$%.2f", salario + porcento );
}
