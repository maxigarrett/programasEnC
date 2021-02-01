#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	bool salir=true;
	int p=0,op=0;
	int zona[5];
	system("color a");
	for(int i =0;i<5;i++)
	{
		zona[i]=0;
	}
	do
	{
		printf("****bienvenido al programa para ingresar y guardar reclamos****\n");
		for(int i=0;i<5;i++)
		{
			printf("ingrese los reclamos en cada zona... esta es la zona [%d]\n",i+1);
			scanf("%d",&zona[i]);
		}
		printf("desea ingresar nuevos reclamos 0 salir al siguiente menu 1 volver a iniciar los reclamos\n");
		scanf("%d",&p);
	}while(p!=0);
	system("cls");
	system("pause");
	do
	{
	printf("0 salir\n1-zona de mayor reclamo\n2-zona sin ningun reclamo\n3-ver zona con sus respectivos reclamos\n4-total de reclamos\n");
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
			int mayor=0,pos=0;
			for(int f=0;f<5;f++)
			{
				if(zona[f]>=mayor)
				{
					mayor=zona[f];
					pos=f+1;
				}
			}
			printf("zona con mayor reclamo es [%d]\n",mayor);
			printf("la zona es [%d]\n",pos);
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			int pos=0;
			for(int i=0;i<5;i++)
			{
				if(zona[i]==0)
				{
					pos=i+1;
					printf("la zona con ningun reclamos es la zona %d\n",pos);
				}
			}
			getch();
			system("cls");
			break;
		}
		case 3:
		{
			for(int i=0;i<5;i++)
			{
				printf("las zonas %d tine reclamo de %d\n",i+1,zona[i]);
			}
			getch();
			system("cls");
			break;
		}
		case 4:
		{
			int total=0;
			for(int i=0;i<5;i++)
			{
				total=total+zona[i];
			}
			printf("el total de reclamos de todas las zonas es de %d\n",total);
			getch();
			system("cls");
			break;
		}
	}
}while(salir);
}
