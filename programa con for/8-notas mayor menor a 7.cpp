#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int nota=0,cont=0,x=0;
	for(int i=0;i<10;i=i+1)
	{
		printf("ingrese la nota del alumno\n");
		scanf("%d",&nota);
		if(nota>=7)
		{
			cont=cont+1;
		}
		else
		{
			if(nota<=6)
			{
				x=x+1;
			}
		}
	}
	printf("las notas mayores o igual a 7 son:%d\n",cont);
	printf("las notas menores a 7 son:%d\n",x);
}
