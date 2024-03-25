#include <stdio.h>

int main(){
	char nome[50];
	int sexo;
	printf("Digite seu nome\n");
	scanf("%s",&nome);
	printf("Digite seu sexo. 1 para masculino, 2 para feminino\n");
	scanf("%d",& sexo);
	if(sexo==1){
		printf("Ilmo Sr. %s",nome);
	} else if(sexo==2){
		printf("Ilma Sra. %s",nome);} else{printf("Porra! Digita 1 ou 2");
	}
	return 0;
}