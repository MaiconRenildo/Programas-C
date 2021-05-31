#include <stdio.h>

int main(){
	int x=2;
	int *px;
	px=&x;
	
	*px=4;
	printf("\nConteudo de px(endereco de c): %d",px);
	printf("\nConteudo apontado por px %d",*px);
	
	(*px)++; //Incrementa o conteudo apontado por px
	printf("\nConteudo de px(endereco de c): %d",px);
	printf("\nConteudo apontado por px %d",*px);
	
	*px++; //Incrementa o conteudo de px
	printf("\nConteudo de px(endereco de c): %d",px);
	
	printf("\nConteudo apontado por px %d",*px);
	
	return 0;
}
