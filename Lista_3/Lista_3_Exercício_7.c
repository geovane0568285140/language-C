#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float nt1, nt2, nt3, m;
	int num = 0;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nt1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nt2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nt3);
	
	m = (nt1 + nt2 + nt3) / 3;
	printf("%f\n", m);
    num = (int) (m * 10);
    	printf("%i\n"), num;
    m = num / 10.0;
	
	printf("%i\n"), num / 10;
	printf("%f\n", m);
	
	if (m <= 5.0){
		printf("Sua media foi de %.1f e sua classifição é E", m);
	}	
	 else if(m <= 6.0){
		printf("Sua media foi de %.1f e sua classifição é D", m);
 	 }
	  else if(m <= 7.0){
		printf("Sua media foi de %.1f e sua classifição é C", m);
	  }
	   else if(m <= 8.0){
	    printf("Sua media foi de %.1f e sua classifição é B", m);
	   }
	    else {
		printf("Sua media foi de %.1f e sua classifição é A", m);
	    }
}
