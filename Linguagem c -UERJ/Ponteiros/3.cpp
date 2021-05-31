#include<stdio.h>

	struct horario{
		int hora;
		int min;
		int segundo;
	};
	
	void teste(struct horario *ponteiro);
	
int main(){
	
	struct horario agora, *depois;
	
	depois=&agora;
	
	printf("\n%d:%d:%d",agora.hora,agora.min,agora.segundo );
	
	(*depois).hora=20;
	depois->min=30;
	depois->segundo=60;
	
	printf("\n%d:%d:%d",agora.hora,agora.min,agora.segundo );
	
	teste(depois);
	
	printf("\n%d:%d:%d",agora.hora,agora.min,agora.segundo );
	
	int somatorio=100;
	struct horario antes;
	
	antes.hora=somatorio+depois->hora;
	antes.min=agora.hora + depois->min;
	antes.segundo=depois->min+depois->segundo;
	
	printf("\n%d:%d:%d",antes.hora,antes.min,antes.segundo );
	
	
	
	getchar();
}

void teste(struct horario *ponteiro){
	ponteiro->hora=30;
	ponteiro->min=50;
	ponteiro->segundo=10;
}
