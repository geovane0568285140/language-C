#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num_x = 0, num_y = 0;
	
	while(num_x == num_y){
		
    	printf("Digite o n�mero X: ");
	    scanf("%i", &num_x);
    	printf("Digite o N�mero Y: ");
	    scanf("%i", &num_y);
	    
	    if(num_x - num_y == 1 || num_y - num_x == 1 || num_x == num_y) {
	    	
     	printf("O intervalo entre %i e %i n�o existe, digite outros numeros\n",num_x ,num_y);
	    num_x = 0;
	    num_y = 0;	    	
	    
		}
		
		
	}

	printf("O numero maior � %i \nO numero menor � %i  \n", 
	(num_x > num_y)? num_x, num_y : num_y, num_x );
	
    (num_x > num_y)? num_y++ : num_x++;
	while(num_x != num_y){
		
		if( num_x < num_y){
			printf("%i ", num_x);
			num_x ++;
		}
		else{
			printf("%i ", num_y);
			num_y++;
		}
		
	}
	
/*	if(num_x == num_y)
	printf("o intervlaor entre %i e %i n�o existe");
	*/
	
	
}
