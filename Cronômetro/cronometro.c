#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


int main(void){

    int hr=0;
    int min=0;
    int sec=0;
    int i=0;

    do{

    system("cls");
    printf(" %d:%d:%d", hr,min,sec);

    if(sec==60){
        sec=0;
        min++;

    }

    if(min==60){
        min=0;
        hr++;

    }

    if(hr==24){
        hr=0;

    }
    Sleep(1000);
    sec++;


    }while(i==0);
    system("pause");
    return(0);


}
