#include<stdio.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    float num, num2 = 0, media = 0, num3 = 0;
    printf("Digite quantos n�meros positivos desejar. Para terminar, digite zero:\n");
    printf("Digite o primeiro n�mero:\n");
    scanf("%f", &num);
    num2 += num;
    while(num != 0){
        printf("Digite o pr�ximo n�mero. Para terminar, digite zero:\n");
        scanf("%f", &num);
        num2 += num;
        num3++;
    }
    
    if(num3 >= 1){
        media = num2 / num3;
        printf("M�dia dos n�meros digitados: %.2f", media);
    }
    else{
        printf("N�o h� m�dia para calcular. Voc� n�o digitou nenhum n�mero v�lido.");
    }
    
}
