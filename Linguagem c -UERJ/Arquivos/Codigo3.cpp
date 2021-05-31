//Aula 83
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	
	file=fopen("string.txt","r");
	if(file==NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		getchar();
		exit(0); //Finaliza a execução do codigo
	}
	char frase[100];
	
	//O fgets le ate a quebra de linha, por isso é necessario botar o while e comparar com NULL
	while(fgets(frase,100,file)!=NULL){
		printf("%s",frase);
	}
	fclose(file);
	
	system("pause");
	return 0;
}
