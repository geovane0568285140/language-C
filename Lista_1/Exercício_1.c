 #include<stdio.h>
 int main(){
    float x, y, z, media;
   printf("Digite seu primeiro numero ");
   scanf("%f", &x);
   
    printf("Digite seu segundo numero ");
   scanf("%f", &y);
   
   printf("Digite seu terceiro numero ");
   scanf("%f", &z);

  media = (x + y + z) / 3 ;
  printf("media = %.2f\n", media);
 }
