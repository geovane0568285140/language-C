#include<stdio.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    float num, num2 = 0, media = 0, num3 = 0;
    printf("Digite quantos números positivos desejar. Para terminar, digite zero:\n");
    printf("Digite o primeiro número:\n");
    scanf("%f", &num);
    num2 += num;
    while(num != 0){
        printf("Digite o próximo número. Para terminar, digite zero:\n");
        scanf("%f", &num);
        num2 += num;
        num3++;
    }
    
    if(num3 >= 1){
        media = num2 / num3;
        printf("Média dos números digitados: %.2f", media);
    }
    else{
        printf("Não há média para calcular. Você não digitou nenhum número válido.");
    }
    
}
