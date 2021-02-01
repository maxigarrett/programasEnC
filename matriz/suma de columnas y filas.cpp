/*el ejersicio coinciste en realizar una matriz de 5x4 elementos y sumar por fila y columna, guardando los resultados
en dos vectores,uno verticas para filas y otro horizontal para las columnas*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int matriz[4][5];
	int horizontal[4];
	int vertical[5];
	int filas ,columnas;
	int suma=0;
	int i;
	//bucle que registra los numeros introducidos de teclado
	for(int filas=0;filas<4;filas++)
	{
		for(int columnas=0;columnas<5;columnas++)
		{
			printf("introduce un para la posicion [%d][%d]",filas,columnas);
			scanf("%d",&matriz[filas][columnas]);
		}
	}
	//bucle que suma las filas y registra el resultado el el vector horizontal
	for(int filas=0;filas<4;filas++)
	{	suma=0;
		for(int columnas=0;columnas<5;columnas++)
		{
			suma=suma+matriz[filas][columnas];
			
		}
		horizontal[filas]=suma;
	}
	//recorre el vector horizontal
	for(int i=0;i<4;i++)
	{
		printf("%d ",horizontal[i]);
		printf(" \n ");
	}
	printf(" \n ");
	
	//bucle que suma las columnas y registra el resultado en el vector vertical
	for(int columnas=0;columnas<5;columnas++)
	{
		suma=0;
		for(int filas=0;filas<4;filas++)
		{
			suma=suma+matriz[filas][columnas];
		}
		vertical[columnas]=suma;
	}
	//imprecion de vector vertical y muestra los resultados
	for(int i=0;i<5;i++)
	{
		printf("%d ",vertical[i]);
		printf(" \n ");
	}
}
