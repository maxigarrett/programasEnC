#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	float prom;
	int num=0,suma=0;
	for(int i=1;i<=10;i=i+1)
	{
		suma=suma+num;
		printf("inicie la carga de valores a sumar\n");
		scanf("%d",&num);
	}
	prom=suma/10;
	printf("suma es:%d\n ",suma);
	printf("el promedio es:%2.f\n ",prom);
}
