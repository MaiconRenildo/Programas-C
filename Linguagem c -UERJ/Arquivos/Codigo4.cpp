//Aula 84

#include<stdio.h>
#include<stdlib.h>

#include<string.h>


struct atracao{
	//char regiao[15];
	//char estado[20];
	char tipo[30];
	char local[30];
	char qualidade[30];
	char resumo[100];
};


int main(){
	
	struct atracao eventos[10];
	//strcpy(eventos[0].regiao,"Norte");
	//strcpy(eventos[0].estado,"Acre");
	strcpy(eventos[0].tipo,"Restaurante");
	strcpy(eventos[0].local,"Acre");
	strcpy(eventos[0].qualidade,"bom");
	strcpy(eventos[0].resumo,"Eu nao sei dizer muito bem");
	
	FILE *file;
	
	file=fopen("Atraçao.txt","a");
	if(file==NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		getchar();
		exit(0); //Finaliza a execução do codigo
	}
	
	//fprintf(file,"Primeira linha\n");
	
	//char frase[]="segunda linha";
	fputs(eventos[0].tipo,file);
	fputs(eventos[0].local,file);
	fputs(eventos[0].qualidade,file);
	fputs(eventos[0].resumo,file);
	char caractere='3';
	fputc(caractere,file);
	fclose(file);
	system("pause");
	return 0;
}
