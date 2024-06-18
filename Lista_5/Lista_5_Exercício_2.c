#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_x = 1, i, m, so, d = 1, su, mult, soma, sub;
	float div;
	
	for(i ; i<=9 ; i++){
		for(m; m <=10; m++){
			printf("%i X %i = %i\n", m, num_x, mult = num_x * m );
		}
		printf("\n\n");
		m = 0;
		for(so; so<=10 ; so++){
			printf("%i + %i = %i\n", so, num_x, soma = num_x + so );
		}
		printf("\n\n");
		so = 0;
		 for(d; d<= 9 ; d++){
			printf("%i / %i = %.2f\n", d, num_x, div = ((float)d / (float)num_x));
		} 
		printf("\n\n");
		d = 1;
		for(su; su<=10; su++){
			printf("%i - %i = %i\n", su, num_x, sub = num_x - su);
		}
		printf("\n\n");
		su = 0;
		num_x++;
		
	}
	
}
