#include<stdio.h>
long fatorial (int n);
int main ()
{
int n = 5;
printf ("\n\nResultado: %ld", fatorial(n));
}

long fatorial (int n){
	printf("%d\n",n); //A fim de confirmar a sequencia do codigo
	long res;
	if (n==0){
		res = 1L;
		return (res);
	}
	res = n*fatorial(n-1);
	printf("\n%d",res);
	
	return (res);
}
