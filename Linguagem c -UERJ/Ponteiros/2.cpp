#include<stdio.h>

int main(){
	
	int x=10;
	int y=20;
	
	int *py;
	py=&y;	//O endereço deste ponteiro está apontando para o endereço de y
	printf("\n %d",&y);
	printf("\n %d",py); //endereço pra onde o ponteiro aponta
	printf("\n %d",*py); //Conteudo localizado no local apontado
	printf("\n %d",&*py); //endereço do que está sendo apontado
	printf("\n %d",&py);//endereço do ponteiro
	
	printf("\n\n");
	
	int *px=&x;	// O valor do ponteiro é igual ao endereço de memoria de x
	printf("\n %d",&x);
	printf("\n %d",px); //endereço pra onde o ponteiro aponta
	printf("\n %d",*px); //Conteudo localizado no local apontado
	printf("\n %d",&*px); //endereço do que está sendo apontado
	printf("\n %d",&px); //endereço do ponteiro
	
	
	double k=20.50;
	char z='a';
	
	double *pk=&k;
	char *pz=&z;
	
	double soma= *px + *pk;
	
	printf("\n soma %f",soma);
	
	printf("\nEndereco x = %d - valor x = %d \n",px, *px);
	printf("\nEndereco k = %d - valor x = %f \n",pk, *pk);
	printf("\nEndereco z = %d - valor x = %c \n",pz, *pz);
	
	
	
}
