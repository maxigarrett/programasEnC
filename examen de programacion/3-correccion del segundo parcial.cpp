#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int cant=0,op=0;
	bool salir=true;
	system("color c");
	printf("ingrese la cantidad de alumnos que quiera\n");
	scanf("%d",&cant);
	int alumno[cant],dni[cant],parcial1[cant],parcial2[cant],tp[cant];
	
	for(int i=0;i<cant;i++)
	{
		printf("ingrese el dni del alumno [%d]\n",i+1);
		scanf("%d",&dni[i]);
		printf("ingrese la nota del primer parcial [%d]\n",i+1);
		scanf("%d",&parcial1[i]);
		printf("ingrese la nota del segundo parcial [%d]\n",i+1);
		scanf("%d",&parcial2[i]);
		printf("ingrese la nota del trabajo parctico [%d]\n",i+1);
		scanf("%d",&tp[i]);
	}
	system("pause");
	getch();
	system("cls");
	do{
	printf("0-salir\n 1-mostrar alumnos aprobados (prom mayor igual 7)\n2-informar si el estudiante adeuda 1 parcial cual es o los dos\n3-mostrar dni si existe y sus respectivas notas\n");
	scanf("%d",&op);
	switch(op)
	{
		case 0:
		{
			salir=false;
			break;
		}
		case 1:
		{	int prom[cant];
			for(int a=0;a<cant;a++)
			{
				prom[a]=(parcial1[a]+parcial2[a]+tp[a])/3;
				if(prom[a]>=7)
				{
					printf("el alumno con dni %d aprobo con promedio de %d\n ",dni[a],prom[a]);
				}
			}
			break;
		}
		case 2:
		{
			for( int x=0;x<cant;x++)
			{
				if(parcial1[x]<7&&parcial2[x]<7)
				{
					printf("los alumnos con dni %d deben el parcial 1 y el parcial 2\n",dni[x]);
				}
				else
				{
					if(parcial1[x]<7)
					{
						printf("el alumno con dni %d debe el primer parcial con %d\n",dni[x],parcial1[x]);
					}
					else
					{
						if(parcial2[x]<7)
						{
							printf("el alumno con dni %d debe el segundo parcial con %d\n",dni[x],parcial2[x]);
						}
					}
				}
				
			}
			break;
		}
		case 3:
		{	
		    int	ban=0;
			int buscardni=0;
			printf("ingrese el dni que desea buscar e informar sus calificaciones\n");
			scanf("%d",&buscardni);
			for(int i=0;i<cant;i++)
			{
				if(buscardni==dni[i])
				{
					ban=1;
					printf("el dni %d\n ",dni[i]);
					printf("la nota del primer parcial es %d\n ",parcial1[i]);
					printf("la nota de su segundo parcial es %d\n ",parcial2[i]);
					printf("la nota del trabajo practico es %d \n",tp[i]);
				}
				else
				{
					ban=0;
				}
			}
			printf("\n");
			if(ban==0)
			{
				printf("el dni %d no se encuentra\n",buscardni);
			}
			break;
		}
			
	}
	}
	while(op=!0);
	printf("chau");
}
