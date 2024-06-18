#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i = 100;
	
	for(i; i <= 200; i++){
		
		printf(" %i ", i);
		
	}
	
}
