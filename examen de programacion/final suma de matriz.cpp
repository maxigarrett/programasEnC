#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int matriz[4][3];//dimensionamos una matriz de 4 filas y 3 columnas	
	int op=0;//variable de tipo entera para el switch
	bool salir=true;
	int mayor=0,suma=0;
	char con;//variable de tipo char para usar un caracter
	system("color c");
	for(int f=0;f<4;f++)//ciclo for recorre lineas
	{
		for(int c=0;c<3;c++)
		{
			matriz[f][c]=0;//llenamos la matriz de ceros por si habia archivos vasura en esa posicion de memoria
		}
	}
	do
	{
		printf("se le pide al usurio que llene la matriz de nueros enteros\n");
		for(int f=0;f<4;f++)
		{
			for(int c=0;c<3;c++)
			{
				printf("ahora llene la mtriz[%d][%d]\n",f,c);
				scanf("%d",&matriz[f][c]);
			}
		}
		printf("desea ingresar nuevos numeros(s/n)\n ");
		scanf("%s",&con);
	}while(con=='s'||con=='S');
	system("cls");
	system("pause");
	do
	{
	
	printf("0-salir\n1-sumar la matriz y mostrar el resultado\n2-mostrar mayor numero ingresado en la matriz\n3-mostrar matriz\n");
	scanf("%d",&op);
	system("cls");
	switch(op)
	{
		case 0:
		{
			salir=false;
			break;
		}
		case 1:
		{
			for(int f=0;f<4;f++)
			{
				for(int c=0;c<3;c++)
				{
					suma=suma+matriz[f][c];
				}
			}
			printf("la suma de la matriz es %d",suma);
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			for(int f=0;f<4;f++)
			{
				for(int c=0;c<3;c++)
				{
					if(matriz[f][c]>=mayor)//le asigno el numero mayor a la variable mayor
					{
						mayor=matriz[f][c];
					}
				}
			}
			printf("el numero mayor de la matriz es:%d",mayor);
			getch();
			system("cls");
			break;
		}
		case 3:
		{
			printf("la impresion de la matriz es:");
			printf("\n");
			for(int f=0;f<4;f++)
			{
				for(int c=0;c<3;c++)
				{
					printf(" %d \t ",matriz[f][c]);
					
				}
				printf("\n");
			}
			getch();
			system("cls");
			break;
		}
	}
	
}while(salir);
printf("*******Uds.A FINALIZADO EL PROGRAMA******");
}
