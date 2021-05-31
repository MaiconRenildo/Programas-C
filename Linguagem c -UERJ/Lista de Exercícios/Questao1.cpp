#include<stdio.h>

int main(){
	int achou=false;
	int r3,r5,r7;
	for(int i=0;achou==false;i++){
		r3=i%3;
		r5=i%5;
		r7=i%7;
		
		if(r3==2 & r5==3 & r7==4){
			printf("\ni%%3:%d",r3);
			printf("\ni%%5:%d",r5);
			printf("\ni%%7:%d",r7);	
			printf("\nValor de i: %d",i);
			achou=true;			
		}
	}
	return 0;
}
