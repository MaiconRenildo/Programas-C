#include <stdio.h>
#include <stdlib.h>
int main(){
	int paradas=0;
	while(paradas<2){
		printf("Informe o numero de reabastecimentos feitos(incluindo o primeiro e o ultimo): ");
		scanf("%d",&paradas);	
	}
	system("cls");
	
	float somaprecos,somagasolina,somadistancias;
	somaprecos=somagasolina=somadistancias=0;
	float odometro[paradas]={0};
	float precos[paradas]={0};
	float gasolina[paradas]={0};
	float distancias[paradas-1]={0};
	float kmPorLitro[paradas]={0};
	
	for(int i=0; i<paradas;i++){
		printf("Dados do %do Abastecimento: \n",i+1);
		printf("Valor do Odometro: ");
		scanf("%f",&odometro[i]);
		if(i>0){
			while(odometro[i]<=odometro[i-1]){
				printf("Valor do Odometro: ");
				scanf("%f",&odometro[i]);
			}
		}
		printf("Quantidade de gasolina comprada em Litros: ");
		scanf("%f",&gasolina[i]);
		printf("Valor pago pelo abastecimento:  ");
		scanf("%f",&precos[i]);
		system("cls");
	}
	for(int i=0;i<paradas;i++){
		distancias[i]=odometro[i+1]-odometro[i];
		kmPorLitro[i]=distancias[i]/gasolina[i];
	}
	printf("Resultado:\n");
	printf("\nA)\n");
	for(int j=0;j<paradas-1;j++){
		printf("Km por litro entre %da e a %da parada: %f\n",j+1,j+2,kmPorLitro[j]);
	}
	for(int j=0;j<paradas-1;j++){
		somagasolina+=gasolina[j];
		somadistancias+=distancias[j];
		somaprecos+=precos[j];
	}
	printf("\nB)\n");
	printf("Km por litro no total da viagem: %f\n",somadistancias/somagasolina);
	printf("\nC)\n");
	printf("Custo do combustivel por km rodado em toda a viagem: %f",somadistancias/somaprecos);	
	return 0;
}
