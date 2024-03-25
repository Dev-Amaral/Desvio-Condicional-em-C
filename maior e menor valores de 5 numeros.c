#include<stdio.h>

int main(){
	int a,b,c,d,e,maior,menor;
	printf("Digite o valor 1\n");
	scanf("%d",&a);
	printf("Digite o valor 2\n");
	scanf("%d",&b);	
	printf("Digite o valor 3\n");
	scanf("%d",&c);
	printf("Digite o valor 4\n");
	scanf("%d",&d);
	printf("Digite o valor 5\n");
	scanf("%d",&e);
	if (a>=b){
		maior=a;
		menor=b;
	} else { maior=b;
	menor=a;
	}		
	if(c>=maior){
		maior=c;
	}else if(menor>=c){
		menor=c;
	}
	if(d>=maior){
		maior=d;
	}else if(menor>=d){
		menor=d;
	}
	if(e>=maior){
		maior=e;
	}else if(menor>=e){
		menor=e;
	}
	printf("Maior= %d\n",maior);
	printf("Menor= %d\n",menor);
	return 0;
}