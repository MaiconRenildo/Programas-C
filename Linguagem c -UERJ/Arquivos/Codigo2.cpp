//Aula 82
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *file; //Cria um ponteiro que aponta pro file do tipo arquivo
	
	file=fopen("numero.txt","r");
	if(file==NULL){ //Se o ponteiro estiver apontando para um lugar nulo
		printf("O arquivo nao pode ser aberto\n");
		system("pause");
		return 0;
	} 
	
	int x,y,z;
	
	//fscanf le ate encontrar um espaco, por isso salva o primeiro numero em x e assim por diante
	fscanf(file,"%i %i %i",&x,&y,&z);
	
	printf("%d %d %d ",x,y,z);
	fclose(file);
	
	return 0;
}
