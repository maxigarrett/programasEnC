#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	float prom;
	int x=0,num,suma=0;
	while(x<10){
		printf("ingrese un numero\n");
		scanf("%d",&num);
		suma=suma+num;
		x=x+1;
	}
	prom=suma/10;
	printf("la suma de los numeros es:%d\n ",suma);
	printf("el promedio es:%2.f\n ",prom);
}
