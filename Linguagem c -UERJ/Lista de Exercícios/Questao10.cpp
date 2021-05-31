#include<stdio.h>
#include<string.h>

	//Define o struct
	struct ficha_palavra
	{
		char palavra[50];
		int quantidade;
	};
		
int main(){
	
	//Recebe a frase digitada e salva no vetor frase
	char frase[200];
	printf("Digite a frase: ");
	gets(frase);
	
	//Declara��o de variaveis
	int vazio, qPalavras, tamanho, f;
	char primeiroElemento,ultimoElemento;	

	//Contagem de CONJUNTOS de caracteres vazios para contagem de palavras e verificacao do tamanho
	vazio=0;  //Conjunto de caracteres vazios
	tamanho=-1;	//Quantidade de caracteres existentes na frase digitada 
	for(int i=0;frase[i]!='\0';i++){
		if(i==0){
			primeiroElemento=frase[i];
			if(primeiroElemento==' '){ vazio--; }
		}
		if(frase[i]==' ' && frase[i-1]!=' '){ vazio++; }
		ultimoElemento=frase[i];
		tamanho++;
	}
	if(ultimoElemento==' '){
		vazio--;
	}
	qPalavras=vazio+1;	//Quantidade de palavras
	char palavras[qPalavras-1][80];	//Vetor palavras com tamanho apropriado
	
	//Separa as palavras em um vetor
	int contador=0;
	for(int k,j=0;j<=tamanho;j++){
		k=0;
		if(frase[j]!=' ' && (frase[j-1]==' ' || j==0 ) ){  //identifica se frase[j] � o inicio de uma palavra
			f=j;
			while(frase[f]!=' ' && f<=tamanho){
				palavras[contador][k]=frase[f];
				k++;
				f++;
			}
			palavras[contador][k]='\0';
			contador++;
		}
	}
	
	//Coloca as palavras diferentes na ficha
	struct ficha_palavra ficha[qPalavras]; //Cria um struct do tipo ficha com tamanho maximo igual a quantidade de palavras(incluindo as repetidas)
	int qPalavrasDif=0;
	for(int i=0,repete;i<qPalavras-1;i++){
		repete=0;
		for(int k=i+1;k<qPalavras;k++){
			if(strcmp(palavras[i],palavras[k])==0){
				repete=1;
				break;
			}
		}
		if(repete==0){
			strcpy(ficha[qPalavrasDif].palavra,palavras[i]);
			qPalavrasDif++;
		}
	}
	strcpy(ficha[qPalavrasDif].palavra,palavras[qPalavras-1]);
	qPalavrasDif++; //Quantidade de palavras diferentes
	
	//Salva no struct a quantidade de vezes que cada palavra aparece
	for(int i=0,a;i<qPalavrasDif;i++){
		a=0;
		for(int j=0;j<qPalavras;j++){
			if(strcmp(ficha[i].palavra,palavras[j])==0){
				a++;
			}
		}
		ficha[i].quantidade=a;
	}
		
	//Coloca na tela o conteudo do struct
	for(int i=0;i<qPalavrasDif;i++){
		printf("\n%s - %d\n",ficha[i].palavra,ficha[i].quantidade);
	}	
	return 0;
}

//ROTEIRO
//Pegar a frase digitada e salvar em um vetor
//Analisar a quantidade de espa�os vazios e verificar quantas palavras a frase tem
//Salvar cada palavra em um vetor
//Criar um vetor sem palavras repetidas
//A partir do vetor sem palavras repetidas percorrer o vetor com todas as palavras, imprimir as palavras do segundo vetor e imprimir a quantidade de vezes que ela aparece no primeiro
