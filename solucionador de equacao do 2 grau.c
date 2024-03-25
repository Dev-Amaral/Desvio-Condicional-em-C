#include<stdio.h>
#include<math.h>
int main (){
	float a,b,c, delta;
	printf("Variavel a: ax^2\n");
	scanf("%f",&a);
	printf("Variavel b: bx\n");
	scanf("%f",&b);
	printf("Variavel c: c\n");
	scanf("%f",&c);
	if(a==0){
		printf("A variavel a deve ser diferente de zero!");
		return 0;
	} else{
		delta=b*b-4*a*c;
		if (delta<0){
			printf("Essa equaçao nao possui solucao para os numeros reais\n");
			return 0;
		} else{
			printf("Primeira raiz= %f",(-b+sqrt(delta))/2*a);
			printf("Segunda raiz= %f",(-b-sqrt(delta))/2*a);		
		}
		
	}
	
	return 0;
}