#include<stdio.h>


//Roteiro
//Ler uma frase, separar as palavras dela e salvar em um vetor -> igual em parte do exemplo 10
//Tendo o vetor com as palavras, varrer cada palavra e verificar a quantidade de vogais, para isso sera necessario usar o: "while palavra[i]!='\0'"
//Apos contar a quantidade de vogais da palavra, se ele tiver tres ou mais vogais imprimi-la

int main(){
	
	//Recebe a frase e salva
	char frase[80];
	printf("Entre com a frase: ");
	gets(frase);
		
	//Declaração de variaveis
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
		if(frase[j]!=' ' && (frase[j-1]==' ' || j==0 ) ){  //identifica se frase[j] é o inicio de uma palavra
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
	
	printf("\nPalavras digitadas com 3 vogais ou mais: ");
	for(int i=0,contador;i<qPalavras;i++){
		contador=0;
		for(int j=0;palavras[i][j]!='\0';j++){
			//Conjunto de verificacoes
			if(palavras[i][j]=='a'|| palavras[i][j]=='e' || palavras[i][j]=='i'
			|| palavras[i][j]=='o' || palavras[i][j]=='u'){
				contador++;
			}
		}
		if(contador>=3){
			printf("\n%s",palavras[i]);
		}
	}
	return 0;
}
