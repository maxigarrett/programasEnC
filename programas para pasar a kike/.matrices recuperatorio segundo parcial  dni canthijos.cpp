#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//en este kike comentalo vos para que te quede bien como se hace
main()
{
	bool salir=true;
	int n=0,op=0;
	
	system("color a");
	printf("digite la cantidad de empleados que desea\n");
	scanf("%d",&n);
	int	matriz[n][6];
	
	
	for(int f=0;f<n;f++)
	{
		printf("ingrese el dni del empleado [%d]\nDNI",+f);
		scanf("%d",&matriz[f][0]);
		printf("ingrese la antiguedad del empleado[%d]\n",+f);
		scanf("%d",&matriz[f][1]);
		printf("digite la cantidad de hijos que tiene el empleado[%d]\n",+f);
		scanf("%d",&matriz[f][2]);
		printf("ingrese el sueldo mensual del empleado[%d]\n",+f);
		scanf("%d",&matriz[f][3]);
	}
	
	system("cls");
	system("pause");
	do{
	printf("******************************************************************************************************\n");
	printf("0-salir\n1-mostrar los empleados qu tienen hijos\n2-cantidad de sueldo\n3-gasto total de la empresa\n");
	scanf("%d",&op);
	printf("********************************************************************************************************\n");
	switch(op)
	{
		case 0:
		{
			salir=false;
			break;
		}
		case 1:
		{
			printf("******OPCION 1*****\n");
			for(int f=0;f<n;f++)
			{
				if(matriz[f][2]>0)
				{
					printf("el empleado con dni %d tiene %d hijos\n",matriz[f][0],matriz[f][2]);
				}
			}
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			printf("*****opcion 2*******\n");
			for(int f=0;f<n;f++)
			{
				if(matriz[f][1]<40)
				{
					matriz[f][4]=((matriz[f][2]*500)+(matriz[f][1]*250))+matriz[f][3];//matriz[f][4] guarda sueldo total
					printf("el empleado con DNI %d\n",matriz[f][0]);
					printf("el sueldo total es de %d\n",matriz[f][4]);
					printf("\n");
				}
				printf("\n");
			}
			getch();
			system("cls");
			break;
		}
		case 3:
		{
			printf("******OPCION 3********\n");
			int	total=0,mes;
			printf("indique el mes que quiere para que se muestre la liquidacion\n");
			scanf("%d",&mes);
			if(mes==12||mes==7)
			{
			   for(int f=0;f<n;f++)
				{
					total=total+((matriz[f][2]*500)+(matriz[f][1]*250))+matriz[f][3];
				}
				total=total+(total/2);
				printf("el total de la empresa a pagar es %d",total);
			}
			else
			{
				for(int f=0;f<n;f++)
				{
					total=total+((matriz[f][2]*500)+(matriz[f][1]*250))+matriz[f][3];
				}
				printf("el total de la empresa a pagar es %d",total);
			}
			getch();
			system("cls");
			break;
		}
	}
}while(op!=0);
printf("gracias anda a la concha de tu madre");
}
