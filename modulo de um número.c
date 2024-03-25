#include<stdio.h>

int main()
{
    int valor;
    printf("Digite um valor para x \n");
    scanf("%d",&valor);
    if(valor<0){
    printf("|x|= %d", -valor);
    } else{printf("|x|= %d", valor);}
    
    return 0;
}