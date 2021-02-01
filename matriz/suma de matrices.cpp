//suma de matrisces
#include<stdio.h>
#include<stdlib.h>
main()
{
	int	m1[3][3];// ldimencionamos la primer matriz el primer corchete indica linea la segunda columnas
	int	m2[3][3];// dimencionamos segunda matris para ser sumada con la primera que es m1
	int	m3[3][3];//esta tercera es para imprimir el resultado
	int f,c;
	printf("ingrese los datos de m1\n");
	for(int f=0;f<3;f++)//filas
	{
		for(int c=0;c<3;c++)	//columnas
		{
			printf("la matriz [%d] [%d] ",f,c);//dice en que parte de la matris esta guardando el dato
			scanf("%d",&m1[f][c]);//llenamos la matriz
			
		}
			
	}
	system("cls");
	printf("\n");
	printf("ingrese los datos de m2\n");
	for(int f=0;f<3;f++)//filas
	{
		for(int c=0;c<3;c++)	//columnas
		{
			printf("la matriz [%d] [%d] ",f,c);//dice en que parte de la matris esta guardando el dato
			scanf("%d",&m2[f][c]);
			m3[f][c]=m1[f][c]+m2[f][c];
			
		}
		
	}
		printf("\n");
	printf("los numeros de m1 son:\n");
	for(int f=0;f<3;f++)//filas
	{	
		for(int c=0;c<3;c++)	//columnas
		{
			printf(" %d ",m1[f][c]);//imprime m1
			
		}
		printf(" \n ");
	}
		printf("\n");
	printf("los numeros de m2 son:\n");
	for(int f=0;f<3;f++)//filas
	{	
		for(int c=0;c<3;c++)	//columnas
		{
			printf(" %d ",m2[f][c]);//imprime m1
			
		}
		printf(" \n ");
	}
		printf(" \n");
	printf("los resultadosson:\n");
	for(int f=0;f<3;f++)//filas
	{	
		for(int c=0;c<3;c++)	//columnas
		{
			printf(" %d ",m3[f][c]);//imprime m1
			
		}
		printf(" \n ");
	}
	system("pause");
}
