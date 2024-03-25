#include<stdio.h>

int main()
{
    float nota1,nota2, nota3, nota4,media, novamedia;
    printf("Digite a nota 1 \n");
    scanf("%f",&nota1);
    printf("Digite a nota 2 \n");
    scanf("%f",&nota2);
    printf("Digite a nota 3 \n");
    scanf("%f",&nota3);
    printf("Digite a nota 4 \n");
    scanf("%f",&nota4);
    media=(nota1+nota2+nota3+nota4)/4;
    if(media>7){
    printf("Aluno Aprovado\n Media= %f", media);
    } else{printf("Digite a nota de exame\n");
	scanf("%f",&nota1);
	novamedia=(media+nota1)/2;
	if (novamedia>5){
	printf("Aluno Aprovado\n Nova media= %f", novamedia);	
	} else{ printf("Aluno Reprovado\n Nova media= %f",novamedia);
	}
	}
    return 0;
}