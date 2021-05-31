#include <stdio.h>
int main(){
	float valor,digitado,soma=0;
	int QuantidadeMoeda[6]={0,0,0,0,0,0};
	float valores[6]={1,0.5,0.25,0.1,0.05,0.01};
	
	printf("Entre com o valor: ");
	scanf("%f",&valor);
	digitado=valor;	

	for(int i=0;i<=5;i++){
		QuantidadeMoeda[i]=valor/valores[i];
		valor=valor-(QuantidadeMoeda[i]*valores[i]);
		//Ajuste para a moeda de 5 centavos
		if(i==4){
			if(valor>0.048 && valor<5){
				QuantidadeMoeda[i]=1;
				valor=valor-0.05;
			}
		}
		soma+=QuantidadeMoeda[i]*valores[i];
	}
	//Ajuste para a moeda de 1 centavo
	if((digitado-soma)>0.008){
		QuantidadeMoeda[5]++;
	}
	
	printf("\nResultado do Troco: \n");
	for(int j=0;j<=5;j++){
		printf("Moeda de %.2f -> %d \n",valores[j],QuantidadeMoeda[j]);
	}
	
	return 0;
}
