#include<stdio.h>

long fatorial(int numero);

int main(){
	int num;
	printf("Informe um numero: ");
	scanf("%d",&num);
	int x=fatorial(num);
	printf("\n\nFatorial de %d: %i",num,x);
}

long fatorial(int n){
	int a;
	if(n>1){
		a=n*fatorial(n-1);
		return a;
	}else{
		return 1;
	}
}
