#include <stdio.h>

int main (){
	int n1,n2,n3,n4;
	printf("Digite o numero 1\n");
	scanf("%d",&n1);
	printf("Digite o numero 2\n");
	scanf("%d",&n2);
	printf("Digite o numero 3\n");
	scanf("%d",&n3);
	printf("Digite o numero 4\n");
	scanf("%d",&n4);
	
	if(n1%2==0){		printf("O numero 1: %d e divisivel por 2\n",n1);	}
	if(n1%3==0){		printf("O numero 1: %d e divisivel por 3\n",n1);	}
	if(n2%2==0){		printf("O numero 2: %d e divisivel por 2\n",n2);	}
	if(n2%3==0){		printf("O numero 2: %d e divisivel por 3\n",n2);	}
	if(n3%2==0){		printf("O numero 3: %d e divisivel por 2\n",n3);	}
	if(n3%3==0){		printf("O numero 3: %d e divisivel por 3\n",n3);	}
	if(n4%2==0){		printf("O numero 4: %d e divisivel por 2\n",n4);	}
	if(n4%3==0){		printf("O numero 4: %d e divisivel por 3\n",n4);	}
	return 0;
}