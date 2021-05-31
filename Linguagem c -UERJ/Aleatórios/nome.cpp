#include <stdio.h>

int main(){
	
	char nome[30];
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);	//scanf("%s",&nome[0]);
	//gets(nome)
	
	printf("Como vai %s?\n",nome);
	
	return 0;
}
