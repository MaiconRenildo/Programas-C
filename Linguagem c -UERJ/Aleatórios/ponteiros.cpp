#include <stdio.h>

int main(){
	char x,*px,c;
	char *d;
	
	c='a';
	
	printf("Endereco de c: %d \n",&c);
	printf("Endereco de px: %d",&px); //Endereço de px
	printf("\n");
	printf("Endereco de x: %d",&x); //Endereço de x
	printf("\n");
	
	printf("Conteudo de c: %c \n",c);
	printf("Conteudo de px: %c",px);
	printf("\n");
	printf("Conteudo de x: %c",x); //Endereço de x
	printf("\n");
	
	px=&c; //Salva o endereço de c no ponteiro px
	
	printf("\nConteudo apontado por px como caracter: %c",*px); //O conteudo de px é o endereço de x
	printf("\nConteudo apontado por  px como int: %d",*px);	
	
	
	x=*px; //X recebe o conteudo apontado por px
	
	printf("\nConteudo de x como caracter: %c",x);
	printf("\nConteudo de x como int: %d",x);

	d=&c;
	printf("\nEndereco de c contido no d: %d",d);
	
	
	printf("\n\nPX:\n");
	printf("\nConteudo de px: %c",*px);
	printf("\nConteudo apontado por px %d",px);
	
	*px+=1; //incrementa o conteudo de px
	(*px)+=1;//incrementa o conteudo apontado por px
	
	
	printf("\n\nPX:\n");
	printf("\nConteudo apontado por px: %c",*px);
	printf("\nConteudo de c: %c",c);
	printf("\nConteudo de px %d",px);
	
	return 0;
}
