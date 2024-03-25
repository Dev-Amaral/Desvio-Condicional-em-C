#include<stdio.h>

int main()
{
    int valor1, valor2;
    printf("Digite o valor 1\n");
    scanf("%d",&valor1);
  printf("Digite o valor 2\n");
scanf("%d",&valor2);
    if(valor1>=valor2){
    printf("Diferenca= %d", valor1-valor2);
    } else{printf("Diferenca= %d", valor2-valor1);}
    
    return 0;
}