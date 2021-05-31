#include <stdio.h>

int main(){
	int vetor[10];
	for(int i=0;i<10;i++){
		printf("Informe o valor: ");
		scanf("%d",&vetor[i]);
	}
	int j;
	int i;
	int aux;
	for(i=0;i<9;i++){
		j=i+1;
		while(j<10){
			if(vetor[i]>vetor[j]){
				aux=vetor[j];
				vetor[j]=vetor[i];
				vetor[i]=aux;	
			}
			j++;
		}
	}
	printf("Vetor ordenado: ");
	for(int a=0;a<10;a++){
		printf("\n%d",vetor[a]);
	}
	return 0;
}
