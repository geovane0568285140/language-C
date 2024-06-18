#include<stdio.h>
#include<locale.h>

int main(){
int num, c, d, u, num_in;

setlocale(LC_ALL, "portuguese");

    printf("Digite um numero: ");
    scanf("%i", &num);

    c = num / 100;
    d = (num % 100) / 10;
    u = num % 10;
    
//    printf("%i\n", num % 100);
//    
//    printf("%i\n", u);

    num_in = (u * 100) + (d * 10) + c;

    printf("Numero invertido: %i", num_in);
}
