#include <stdio.h>
int main(){
	int vetor[10]={0,0,0,0,0,0,0,0,0,0};
	//printf("%d",vetor[3]);
	
	for(int i=0;i<10;i++){
		printf("informe o valor: ");
		scanf("%d",&vetor[i]);
	}
	int aux;
	int a=0;
	while(a<9){
		if(vetor[a]>=vetor[a+1]){
			aux=vetor[a+1];
			vetor[a+1]=vetor[a];
			vetor[a]=aux;
			aux=0;
			a++;
		}else{
			a++;
		}
	}
	
	for(int x=0;x<10;x++){
		printf("%d \n",vetor[x]);
	}
	
	return 0;
}
