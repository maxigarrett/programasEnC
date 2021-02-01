#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int x,num;
	x=0;
	printf("digite los numeros que desea que se muestre\n");
	scanf("%d",&num);
	while(x<num){
		x=x+1;
		printf("%d-",x);
	}
}
