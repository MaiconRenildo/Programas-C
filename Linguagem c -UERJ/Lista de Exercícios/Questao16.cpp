#include<stdio.h>
#include<stdlib.h>//Necessaria para a funcao rand
#include<time.h>//Necessaria para a funcao time

void soma(int a,int b,int c[],int posicao);

struct lancamento{
	int dado1[11];
	int dado2[11];
};

struct lancamento j1;
struct lancamento j2;

int main(){
	int valor1,valor2,lancamento[11],somaj1=0,somaj2=0,r1,r2;
	
	srand(time(NULL));
	
	for(int i=0;i<11;i++){	
		//Lancamentos jogador 1
		j1.dado1[i]=1+rand()%6;
		j1.dado2[i]=1+rand()%6;
		//Lancamentos jogador 2
		j2.dado1[i]=1+rand()%6;
		j2.dado2[i]=1+rand()%6;
	}
		
	//Dados dos lancamentos
	for(int i=0;i<11;i++){
		printf("\n---LANCAMENTO %d---\n",i+1);
		printf("\nJogador 1-> %d - %d ",j1.dado1[i],j1.dado2[i]);
		printf("\nJogador 2-> %d - %d\n ",j2.dado1[i],j2.dado2[i]);
		
		//Se nenhum dos dois fizer uma dupla-> verifica quem tem a maior soma
		if(j1.dado1[i]!=j1.dado2[i] && j2.dado1[i]!=j2.dado2[i]){
			somaj1=j1.dado1[i]+j1.dado2[i];
			somaj2=j2.dado1[i]+j2.dado2[i];
			soma(somaj1,somaj2,lancamento,i);
		}else{
			//Se os dois fizerem uma dupla-> verifica qual dupla eh maior
			if(j1.dado1==j1.dado2 && j2.dado1==j2.dado2){
				somaj1=j1.dado1[i]*2;
				somaj2=j2.dado1[i]*2;
				soma(somaj1,somaj2,lancamento,i);
			//Se apenas um fizer uma dupla-> ele vence
			}else{
				if(j1.dado1[i]==j1.dado2[i]){
					lancamento[i]=1;
					printf("\n1 venceu !\n");
				}else{
					lancamento[i]=2;
					printf("\n2 venceu !\n");
				}
			}
		}
		if(lancamento[i]==1){
			r1++;
		}else if(lancamento[i]==2){
			r2++;
		}
	}
	printf("\n\nResultado final: ");
	if(r1>r2){
		printf("O Jogador 1 venceu a partida");
	}else if(r2>r1){
		printf("O Jogador 2 venceu a partida");
	}else{
		printf("A partida terminou empatada");
	}
	return 0;
}

void soma(int a,int b,int c[],int posicao){
	if(a>b){
		c[posicao]=1;
		printf("\n%d venceu !\n",c[posicao]);
	}else if(b>a){
		c[posicao]=2;
		printf("\n%d venceu !\n",c[posicao]);
	}else{
		c[posicao]=0;
		printf("\nEmpate\n");
	}
}
