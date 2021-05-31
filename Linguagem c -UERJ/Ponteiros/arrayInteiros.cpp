#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	
	int *p;
	p=a;
	
	printf("%i",*(p+1));
	
	printf("%d",p[2]);
	p[2]=20;
	printf("\n\n%d",a[2]);
}
