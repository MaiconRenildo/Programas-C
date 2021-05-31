//Aula 81
#include<stdio.h>

int main(){
	FILE *file; //Cria um ponteiro que aponta pro file do tipo arquivo
	
	file=fopen("file.txt","w"); //Abre o arquivo
	fprintf(file,"Paooooooo"); //Escreve no arquivo
	fclose(file);
	
	return 0;
}


