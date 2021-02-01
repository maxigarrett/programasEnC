//escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuantos tienen notas mayores o iguales a 7 y cuantos menores
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int notas,x=0,cont=0,i=0;
	while(x<10)
	{
		x=x+1;
		printf("ingrese la nota de los alumnos\n");
		scanf("%d",&notas);
		if(notas>=7)
		{
			cont=cont+1;
		}
		else
		{	
			if(notas<=6)
			{
				i=i+1;	
			}
		}
	}
	printf("las notas mayores a siete son:%d\n",cont);
	printf("las notas menores son:%d",i);
}
