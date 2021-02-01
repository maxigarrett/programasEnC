/*una empresa tiene dos turnos(mañana y tarde) en los que trabajan 8 empleados
(4 por tarde y 4 por mañana).confeccionar un programa que permita almacenar los sueldos de los empeados agrupados por turno
(definir los dos vectores con componentes del tipo float).imprimir los gastos en sueldos de cada turno*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	float turnoman[4],turnotar[4];
	
	printf("sueldos de empleados del turno de la maniana\n");
	printf("\n");
	
	for(int f=0;f<4;f++)
	{
		printf("ingrese el sueldo\n");
		scanf("%f",&turnoman[f]);
	}
	printf("\n");
	printf("sueldos de turno tarde\n");
	
	for(int f=0;f<4;f++)
	{
		printf("ingrese el sueldo:\n");
		scanf("%f",&turnotar[f]);
	}
	float gastogen=0;
	float maniana=0;
	float tarde=0;
	for(int f=0;f<4;f++)
	{
		maniana=maniana+turnoman[f];
		tarde=tarde+turnotar[f];
		gastogen=maniana+tarde;
	}
	printf("\n");
	printf("los gastos por el sueldo de los empleados a la mañana es:\n %0.2f",maniana);
	printf("\n");
	printf("los gastos por el sueldo de los empleados a la tarde es:\n %0.2f",tarde);
	printf("\n");
	printf("el gasto general de los dos turnos es:\n%0.2f",gastogen);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
