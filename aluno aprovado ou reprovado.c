#include<stdio.h>

int main()
{
    float nota1,nota2, nota3, nota4,media;
    printf("Digite a nota 1 \n");
    scanf("%f",&nota1);
    printf("Digite a nota 2 \n");
    scanf("%f",&nota2);
    printf("Digite a nota 3 \n");
    scanf("%f",&nota3);
    printf("Digite a nota 4 \n");
    scanf("%f",&nota4);
    media=(nota1+nota2+nota3+nota4)/4;
    if(media>=5){
    printf("Aluno Aprovado\n Media= %f", media);
    } else{printf("Aluno Reprovado\n Media= %f", media);}
    
    return 0;
}