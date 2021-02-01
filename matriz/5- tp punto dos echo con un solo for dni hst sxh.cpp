/*se solicita al usuario que ingrese 10 numeros de dni sin puntos,por cada dni se solicita un sueldo x horas,horas trabajadas, años de antiguedad.
una vez ingresado lo solicitado  se mostrara una lista que diga:
el empleado con DNI ............,cobra un sueldo por hora de.............,trabajo..........horas ,su plus por los....... años de antiguedad es......... y su sueldo
a cobrar es $...........,
la antiguedad se calcula de 0 a 5 años %10, 6 a 10 años %15, mas de 15 años 25%.*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int b=0;
	int bdni=0;
	int matriz[10][6];
	system("color a");
	printf("********bienvenido al programa**********\n");
	printf("\n");
	for(int f=0;f<10;f++)
	{
		printf("ingrese el DNI del empleado [%d]\nDNI",+f);
		scanf("%d",&matriz[f][0]);
		printf("ingrese el sueldo por hora del empleado[%d]\n",+f);
		scanf("%d",&matriz[f][1]);
	    printf("ingrese las horas trabajadas del empleado[%d]\n",+f);
		scanf("%d",&matriz[f][2]);
		printf("ingrese anios de antiguedad[%d]\n",+f);
		scanf("%d",&matriz[f][3]);
		printf("\n");
	}
	for(int f=0;f<10;f++)
	{
		matriz[f][4]=matriz[f][1]*matriz[f][2];//matriz [f][4] se guarda el sueldo pero sin plus
	}
	for(int f=0;f<10;f++)
	{
		if(matriz[f][3]<=5)
		{
			matriz[f][5]=(matriz[f][4]*10)/100;//matriz[f][5] se guarda el plus
		}
		else
		{
			if(matriz[f][3]<=10&&matriz[f][3]>5)
			{
				matriz[f][5]=(matriz[f][4]*15)/100;
			}
			else
			{
				if(matriz[f][3]>=15)
				{
					matriz[f][5]=(matriz[f][4]*25)/100;
				}
			}
		}
	}
	for(int f=0;f<10;f++)
	{
		matriz[f][6]=matriz[f][4]+matriz[f][5];
	}
	for(int f=0;f<10;f++)
	{
		printf("el dni %d\n",matriz[f][0]);
		printf("cobra un sueldo por hora de %d\n",matriz[f][1]);
		printf("trabajo %d horas\n",matriz[f][2]);
		printf("su plus por los %d anios de antiguedad es de %d",matriz[f][3],matriz[f][5]);
		printf("el sueldo total a cobrar de empleado es %d",matriz[f][6]);
		printf("\n");
	}
	printf("\n");
	do
	{
	printf("ingrese el dni a buscar para saber sus datos personales\n");
	scanf("%d",&bdni);
	printf("\n");
	for(int f=0;f<10;f++)
	{
		b=1;
		if(bdni==matriz[f][0])
		{
			printf("***el dni se encontro***\n");
			printf("el dni es %d\n",matriz[f][0]);
			printf("cobra un sueldo por hora de %d\n",matriz[f][1]);
			printf("traba %d horas\n",matriz[f][2]);
			printf("su plus por los %d anios de antiguedad es de %d\n",matriz[f][3],matriz[f][5]);
			printf("el sueldo total a cobrar del empleado es %d\n",matriz[f][6]);
			printf("\n");
		}
		else
		{
			b=0;
		}
	}
	printf("\n");
	if(b==0)
	{
		printf("el numero no se encontro");
	}
	printf("\n");
	printf("desea ingresar otro dni 0 salir 1 buscar otro\n");
	scanf("%d",&b);
}while(b!=0);
}
