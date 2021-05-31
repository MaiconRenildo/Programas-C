#include<stdio.h>
#include<string.h>
#include<windows.h>
	struct ficha{
		int ano;
		char sexo;
		int procedencia;
	};
	char procedencia[3][15]={"Capital","Interior","Outro estado"};
	
int main(){
	int qAcidentes;
	printf("Informe a quantidade de acidentes: ");
	scanf("%d",&qAcidentes);
	
	struct ficha Acidentes[qAcidentes-1];
	
	system("cls");
	for(int i=0;i<qAcidentes;i++){
		printf("Acidente %d: ",i+1);
		printf("\nAno de nascimento: ");
		scanf("%d",&Acidentes[i].ano);
		
		do{
			printf("\nSexo(M-Masculino, F-Feminino): ");
			scanf("%s",&Acidentes[i].sexo);	
		}while(Acidentes[i].sexo!='M' && Acidentes[i].sexo!='F');


		do{
			printf("\nProcedencia(0-Capital,1-interior,2-outo estado) :");
			scanf("%d",&Acidentes[i].procedencia);
		}while(Acidentes[i].procedencia>2 || Acidentes[i].procedencia<0);

		system("cls");
	}
	
	int menores21,mulherCapital,interiorMaior60,mulherMaior60;
	menores21=mulherCapital=interiorMaior60=mulherMaior60=0;
	
	for(int i=0;i<qAcidentes;i++){
		if((2021-(Acidentes[i].ano))<21){
			menores21++;
		}
		if(Acidentes[i].procedencia==0 && Acidentes[i].sexo=='F'){
			mulherCapital++;
		}
		if(Acidentes[i].procedencia==1 && (2021-(Acidentes[i].ano))>60){
			interiorMaior60++;
		}
		if(Acidentes[i].sexo=='F' && (2021-(Acidentes[i].ano))>60){
			mulherMaior60++;
		}
	}
		
	float porcentagem=(menores21*100)/qAcidentes;
	
	printf("\nPorcentagem de Motoristas com menos de 21: %f%",porcentagem);
	printf("\nMulheres da Capital: %d ",mulherCapital);
	printf("\nMotoristas do interior com mais de 60 anos: %d",interiorMaior60);
	printf("\nNumero de mulheres com mais de 60: %d",mulherMaior60);
	
	return 0;
}
