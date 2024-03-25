#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Valor de a\n");
	scanf("%d",&a);
	printf("Valor de b\n");
	scanf("%d",&b);	
	printf("Valor de c\n");
	scanf("%d",&c);
	if (a>=b){ if(a>=c){ if(b>=c){printf("Ordem crescente: %d %d %d",c,b,a);	} else{printf("Ordem crescente: %d %d %d",b,c,a);	}	}else {printf("Ordem crescente: %d %d %d",b,a,c);	}}
	else if(b>=c){if(a>=c){printf("Ordem crescente: %d %d %d",c,a,b);	} else{printf("Ordem crescente: %d %d %d",a,c,b);	}	} else{printf("Ordem crescente: %d %d %d",a,b,c);	}
	
	
	/* 532 c b a
	523 c a b
	352 b c a
	325 b a c
	235 a b c
	253 a c b
	Nao importa a ordem no final deve aparecer 2, 3 ,5
	*/
	
	return 0;
}