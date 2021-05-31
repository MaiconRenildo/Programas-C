#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	//Declaração das variaveis
	char cadeia[80];
	char semRepeticao[80];
	int cont,contador,quantidade,achou;
	cont=contador=quantidade=0;

	//Recebe a string
	printf("Entre com a cadeia: ");
	gets(cadeia);
	
	//Conta a quantidade de caracteres existentes na string digitada e armazena em cont
	for(int i=0;cadeia[i]!='\0';i++){ cont+=1; }
	
	//Verifica em cada posiçao da string se há um elemento igual nas posições seguintes	
	for(int i=0;i<cont-1;i++){
		achou=false;
		for(int j=i+1;j<=cont-1;j++){
			if(cadeia[i]==cadeia[j]){
				achou=true;
				break;
			}
		}
		if(achou==false && cadeia[i]!=' '){
			semRepeticao[contador]=cadeia[i];
			contador+=1;
		}
	}
	//Salva o ultimo elemento digitado e acrescenta o \0 para sinalizar o fim da string
	semRepeticao[contador]=cadeia[cont-1];
	semRepeticao[contador+1]='\0';
	
	printf("\nString sem caracteres repetidos ou vazios: %s",semRepeticao);	
	for(int i=0;semRepeticao[i]!='\0';i++){
		quantidade+=1;
	}
	printf("\nQuantidade de caracteres distintos: %d",quantidade);
	return 0;
}

