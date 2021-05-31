#include <stdio.h>
#include<conio.h>

int main(){
	char ch;
	printf("Digite um caracter: ");
	ch=getche();	//Mostra na tela enquanto recebe
	printf("\nO caracter digitado foi: %c \n",ch);
	
	printf("Digite um outro caracter:");
	ch=getch();  //Não mostra na tela enquanto recebe
	printf("\nO caracter digitado foi: %c \n",ch);	
	return 0;
}
