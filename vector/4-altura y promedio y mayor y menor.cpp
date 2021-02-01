#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	
	float altura[5];
	float prom,suma=0;
	for(int f=0;f<5;f++)
	{
		printf("ingrese la altura de las personas\n");
		scanf("%f",&altura[f]);
	}
	for(int f=0;f<5;f++)
	{
		suma=suma+altura[f];
	}
	prom=suma/5;
	printf("el promedio es:%0.2f",prom);
	printf("\n");
	
	int mayor=0,menor=0;
	
	for(int f=0;f<5;f++)
	{
		if(altura[f]>prom)
		{
			mayor++;
		}
		else
		{
			if(altura[f]<prom)
			{
				menor++;
			}
		}
	}
	
	printf("\n");
printf("las personas mas altas al promedio son:%d\n ",mayor);
printf("\n");
printf("las personas menos altas al promedio son:%d\n",menor);	
	
}
