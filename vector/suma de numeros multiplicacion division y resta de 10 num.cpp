//que lea 10 numeros por teclado , almacene en un array y muestre la suma la resta multiplicacion y division de todos
#include<stdio.h>
#include<stdlib.h>

main()
{
	int num[10];
	int sum=0,res=0,mult=0,div=0;
	
	for(int i=0;i<10;i++)
	{
		printf("ingrese los numeros para hacer las operaciones matematicas\n");
		scanf("%d",&num[i]);
	
	}
	
	for(int x=0;x<10;x++)
	{
		sum=sum+num[x];
		res=res-num[x];
		mult=mult*num[x];
		div=div/num[x];
	}
	printf("la suma de los num es %d",sum);
	printf("\n");
	printf("la res de los num es %d",res);
	printf("\n");
	printf("la multiplicacion es %d ",mult);
	printf("\n");
	printf("la division es %d ",div);
	printf("\n");
	system("pause");	
}
