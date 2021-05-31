#include<stdio.h>

long fatorial(int numero);

int main(){
	int num;
	printf("Informe um numero: ");
	scanf("%d",&num);
	int b=4;
	int x=fatorial(num);
	printf("\n\n%d",x);
	
}

long fatorial(int n){
	int a;
	if(n>1){
		a=n*fatorial(n-1);
		printf("\n%d",a);
		return a;
	}else{
		return 1;
	}
	

}
