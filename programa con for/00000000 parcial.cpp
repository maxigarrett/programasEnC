#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int cant,nota,suma;
	float prom,
	printf("ingrese la cantidad de alumnos que desea\n");
	scanf("%d",&cant);
	for(int i=1;i<=cant;i++)
	{
		suma=suma+nota;
		printf("nombre de alumno\n");//va el numero de documento
		scanf("%c",&cant);
		printf("nota del alumno");
		scanf("%d",&nota);
	}
	prom=suma/nota;
	printf("promedio es\n",prom);
}
