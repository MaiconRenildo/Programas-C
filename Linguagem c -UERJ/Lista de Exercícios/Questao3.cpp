#include<stdio.h>

main(void){
	int num=0;
	while(num<1 or num>32767){//or num>33550338){
		printf("Digite um numero entre 1 e 32767: ");
		scanf("%d",&num);
	}
	int contador=0;
	for(int i=1;i<num;i++){
		if((num%i)==0){
			contador+=i;
		}
	}
	if(contador==num){
		printf("%d eh um numero perfeito",num);
	}else{
		printf("%d nao eh um numero perfeito",num);
	}
}
