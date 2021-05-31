#include<stdio.h>

int main(){
	int num=0;
	while(num<1){
		printf("Entre com um numero positivo: ");
		scanf("%d",&num);
	}

	int resultado=true;
	if(num==1){
		resultado=false;
	}else{
		for(int i=2;i<num;i++){
			if((num%i)==0){
				resultado=false;
			}
		}	
	}
	printf("\nResultado: ");
	if(resultado){
		printf("O numero digitado eh primo");
	}else{
		printf("O numero digitado nao eh primo");
	}
	return 0;
}
