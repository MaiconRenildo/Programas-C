#include<stdio.h>
#include<string.h>

void funcao(char *ptr);
int main(){
	char chuva[10]={'a','b','c','d','e'};
	printf("%c",chuva[1]);
	char *p;
	p=chuva;
	printf("\n%c",p[1]);
	
	p[1]='w';
	printf("\n%c",chuva[1]);
	
	char palavras[5][10]={"abc","cde","efghghghg"};
	
	char *j[5];
	j[5]=palavras[2];
	
	printf("\n%s",j[5]);
	
	//j[5]="";
	strcpy(j[5],"oi");
	
	printf("\n\n%s",palavras[2]);
	funcao(j[5]);
	
}

void funcao(char *ptr){
	strcpy(ptr,"teste");
	printf("teste do ponteiro: %s",ptr);
}
