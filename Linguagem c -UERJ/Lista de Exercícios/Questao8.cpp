#include<stdio.h>
int main(){
	int vetor[10];
	
	int maior,segmaior;
	segmaior=maior=0;
	
	for(int i;i<10;i++){
		printf("Entre com o valor: ");
		scanf("%d",&vetor[i]);
		if(maior<vetor[i]){
			segmaior=maior;
			maior=vetor[i];
		}else if(segmaior<vetor[i]){
			segmaior=vetor[i];
		}	
	}
	printf("\nMaior valor digitado: %d",maior);
	printf("\nSegundo maior valor digitado: %d",segmaior);
	
	return 0;
}
