#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int n1;
	int cant;

	
	printf("ingrese cantidad\n");
	scanf("%d",&cant);
	int vector[cant];
	for(int i=0;i<cant;i++)
	{
		printf("ingrese un num\n");
		scanf("%d",&n1);
		vector[i]=n1;
		
	}
	int mayor=vector[0];
	int posmayor=0;
	int menor=vector[0];
	int posmenor=0;
	
	for(int h=1;h<cant;h++)
	{
		if(vector[h]>mayor)
		{
			mayor=vector[h];
			posmayor=h;
		}
		if(vector[h]<menor)
		{
			menor=vector[h];
			posmenor=h;
			
		}
		
	}
	
	printf("el numero mayor es:%d\n ",mayor);
	printf("la posicion mayor es:%d\n ",posmayor);
	printf("el numero menor es:%d\n ",menor);
	printf("la posicion menor es:%d\n ",posmenor);
	
}
