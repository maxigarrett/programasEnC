//maximiliano garrett
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	bool salir=true;
	int total=0;
	int cant=0,op=0;
	system("color c");
	printf("ingrese la cantidad de empleados que desee\n");
	scanf("%d",&cant);
	int vector[cant],dni[cant],sueldom[cant],antiguedad[cant],canthijos[cant],sueldototal[cant];
	
	for(int i=0;i<cant;i++)
	{
		printf("ingrese el dni del empleado [%d]\n",i+1);
		scanf("%d",&dni[i]);
		printf("ingrese el sueldo mensual[%d]\n",i+1);
		scanf("%d",&sueldom[i]),
		printf("ingrese la antiguedad[%d]\n",i+1);
		scanf("%d",&antiguedad[i]);
		printf("ingrese cantidad de hijos[%d]\n",i+1);
		scanf("%d",&canthijos[i]);
	}
	system("cls");
	system("pause");
	do{
	
	
	printf("0-salir\n1-mostrar empleados que tengan hijos\n2-cantidad de sueldo\n3-total sueldo que debe pagar la empresa\n");
	scanf("%d",&op);
	switch(op)
	{
		case 0:
		{
			salir=false;
			break;
		}
		case 1:
		{
			for(int i=0;i<cant;i++)
			{
				if(canthijos[i]>0)
				{
					printf("el empleado con dni %d tiene %d hijos\n ",dni[i],canthijos[i]);
				}
			}
			getch();
			system("cls");
			break;
		}
		
		case 2:
		{
			
			for(int i=0;i<cant;i++)
			{
				if(antiguedad[i]<10000)
				{
					sueldototal[i]=((canthijos[i]*500)+(antiguedad[i]*250))+sueldom[i];
					
				}
			}
			for(int x=0;x<cant;x++)
			{
				printf("el dni %d\n",dni[x]);
				printf("el sueldo total %d\n",sueldototal[x]);
				printf("\n");
			}
			break;
				getch();
			system("cls");
		}
		case 3:
		{
		//	int mes[cant],aginaldo[cant],total[cant],zaz[cant];
		int mes;
	
			printf("ingrese el mes para saber el sueldo que le corresponde pagar a la empresa\n");
			scanf("%d",&mes);
			
		//	total[cant]=total[cant]+sueldototal[cant];	
		if(mes==7 || mes==12)
		{
			for(int i=0; i<cant;i++)
			{
				total=total+((canthijos[i]*500)+(antiguedad[i]*250))+sueldom[i];
			}
			total=total+(total/2);
			printf("%d",total);
			
		}
		else
		{
			for(int i=0; i<cant;i++)
			{
				total=total+((canthijos[i]*500)+(antiguedad[i]*250))+sueldom[i];
			}
			printf("%d",total);
			
		}
		
				getch();
			system("cls");
			
			break;
		}
	}
}while(op!=0);
printf("gracias por confiar\n");
}
