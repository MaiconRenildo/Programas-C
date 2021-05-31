#include<stdio.h>
#include<string.h>

void Menu(char ptr[]);

int main(){
	char tipos[7][20]={"Restaurante","Praia","Show","Teatro","Parque","Museu"};
	char *ponteiro[20];
	
	int *ponta[20];
	/*
	ponteiro[0]=tipos[1];
	printf("%d",ponteiro[0]);
	printf("\n%d",&tipos[1]);
	*/

	printf("oi");
	
	for(int i=0;strcmp(tipos[i],"")!=0;i++){
		ponteiro[i]=tipos[i];
	}
	
	//printf("%s",ponteiro[0]);
	Menu(&ponteiro[0]);
	
}

void Menu(char ptr[]){
	printf("oiiiiiiiiiiiiii");
	printf("%s",ptr[0]);
}

