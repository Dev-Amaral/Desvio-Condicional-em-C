#include<stdio.h>

int main(){
	int valor;
	printf ("Digite um valor inteiro\n");
	scanf("%d",&valor);
	if((valor<1)||(valor>9)){
		printf("O valor esta fora da faixa permitida");
	} else {printf("O valor esta dentro da faixa permitida"); 
	}
	
	return 0;
}