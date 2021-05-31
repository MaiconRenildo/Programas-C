#include<stdio.h>

int main(){
	int y=20;
	int x;
	x=10;
	printf("\n%d",x); //Conteudo da variavel x
	printf("\n%d",&x); //endere�o da variavel x
	
	int *ponteiro;
	ponteiro=&x;
	printf("\n%d",ponteiro); //endere�o armazenado no ponteiro
	printf("\n%d",*ponteiro); //Conteudo apontado pelo ponteiro
	
	*ponteiro=y; //O conteudo armazenado no ponteiro � alterado, ent�o o endere�o
	//que antes armazanava o 10 agora armazena o 20;
	
	printf("\n%d",x); //Valor de x foi alterado
	
	printf("\n%d",&ponteiro); //Endere�o do ponteiro
	printf("\n%d",&*ponteiro); //Endere�o do que � apontado pelo ponteiro

	ponteiro=&x;
	return 0;
}
