#include<stdio.h>
#include<stdlib.h>

void ordena(int vet[]);
void recebe(int vet[]);
void mostra(int vet[]);

int main(){

	int vetor1[10];
	int vetor2[10];
	int vetor3[10];
	
	int contador=0;
	
	printf("\nPreencha o primeiro vetor:\n");
	recebe(vetor1);
	
	printf("\nPreencha o segundo vetor:\n");
	recebe(vetor2);
	
	printf("\nPreencha o terceiro vetor:\n");
	recebe(vetor3);
	
	ordena(vetor1);
	ordena(vetor2);
	ordena(vetor3);
	
	printf("\n\nVetor1 Ordenado: ");
	mostra(vetor1);
	
	printf("\n\nVetor 2 Ordenado: ");
	mostra(vetor2);
	
	printf("\n\nVetor3 Ordenado: ");
	mostra(vetor3);

	return 0;
}
	void recebe(int vet[]){
		for(int i=0;i<10;i++){
		printf("Valor:");
		scanf("%d",&vet[i]);
		}
	}
	
	void ordena(int vet[]){
		for(int i=0,auxiliar;i<9;i++){
			for(int j=i+1;j<10;j++){
				if(vet[i]>vet[j]){
					auxiliar=vet[i];
					vet[i]=vet[j];
					vet[j]=auxiliar;
				}
			}
		}		
	}
	
	void mostra(int vet[]){
		for(int i=0;i<10;i++){
			printf("\n %d",vet[i]);
		}
	}	
