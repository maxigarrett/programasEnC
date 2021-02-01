#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num=0,cont=0,x=0;
	printf("ingrese la cantidad de numeros que quiere que se repita\n");
	scanf("%d",&num);
	for(int i=0;i<num;i=i+1)
	{
		printf("ingrese el valor\n");
		scanf("%d",&num);
		if(num%3==0)
		{
			cont=cont+1;
		}
		else
		{
		
			if(num%5==0)
			{
				x=x+1;
			}
		}
	}
	printf("los numeros multiplos de 3 son:\n%d",cont);
	printf("\n");
	printf("los numeros multiplos de 5 son:\n%d",x);
}
