#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char nomes[4][10]={"Adriana","Bia","Carla","Nadja"};
	
	for(i=0;i<4;i++){
		if(strcmp("Nadja",nomes[i])==0){
		printf("nome=%s esta na %d posicao",nomes[i],i);	
		}
	}
	return 0;
}
