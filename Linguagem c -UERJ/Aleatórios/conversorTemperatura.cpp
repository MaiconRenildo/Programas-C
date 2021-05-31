#include <stdio.h>
int main(){
	float celsius,faren;
	printf("Informe a temperatura em graus graus celsius: ");
	scanf("%f",&celsius);
	printf("Temperatura informada: %.2f",celsius);
	faren=(celsius*1.8)+32;
	printf("\nA temperatura em Fahrenheit eh igual a: %.2f F",faren);
	char a[30]="fim";
	printf("\n %s",a);
	return 0;
}
