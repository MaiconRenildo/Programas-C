#include<stdio.h>

int main(){
	char nome[80]={'m','a','r','i','a',' ','mar'};
	char teste[80];
	printf("%s",nome);
	for(int i=0;nome[i]!='\0';i++){
		teste[i]=nome[i];
	}
	printf("\n\n\n\n");
	printf("\n\n%s",teste);
	for(int i=0;teste[i]!='\0';i++){
		printf("\n%c",teste[i]);
	}
	return 0;
}
