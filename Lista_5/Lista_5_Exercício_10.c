#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i = 100;
	
	for(i ; i < 1000 ; i = i + 9 ){
		
		printf(" %i ", i + 9);
		
	}
	
}
