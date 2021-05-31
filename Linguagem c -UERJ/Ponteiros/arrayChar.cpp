#include<stdio.h>

int main(){
	char chuva[10]={'a','b','c','d','e'};
	printf("%c",chuva[1]);
	char *p;
	p=chuva;
	printf("\n%c",p[1]);
	
	p[1]='w';
	printf("\n%c",chuva[1]);
}
