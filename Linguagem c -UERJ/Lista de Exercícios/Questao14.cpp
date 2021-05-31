#include<stdio.h>
#include<windows.h>    //necessario para o system("cls")
int main(){
	int hr=0,min=0,seg=0,i=0;
	
	while(i==0){
		if(seg==60){
			min++;
			seg=0;
		}
		if(min==60){
			hr++;
			min=0;
		}
		if(hr==24){
			hr=0;
		}
		system("cls");
		printf("%d:%d:%d",hr,min,seg);

		Sleep(1000);
		seg++;
	}
	return 0;
}
