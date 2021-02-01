/*se solicita al usuario que ingrese "n" cantidad de numero.Una vez que ingreso los numeros pedirle que ingrese un numero a buscar, si el numero se encuentra
informar en que posicion esta y salir.si el num no se encuentra debera solicitarle otro numero.solo saldra del sistema si el numero a buscar se encuentra*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int pos=-1;
	int n=0, num;
	bool salir=true;
	printf("ingrese un numero y a continuacion ese numero es la veces que se repira\n");
	scanf("%d",&n);
	int vector[n];
	system("cls");
	for(int i=0;i<n;i++)  //cantidad de posiciones del vector     
	{	
		vector[i]=0;//para dejar el vector en 0 por las dudas que aya basura en ese espacio de memoria que guarda el vector
	}
	
	for(int m=0;m<n;m++) //carga del vector
	{
		printf("ingrese num para llenar el vector[%d]\n",+m);
		scanf("%d",&vector[m]);
	}
	do
	{
		
		printf("ingrese nuevamente num a buscar\n");
		scanf("%d",&num);
		for(int i=0;i<n;i++)
		{
			if(num==vector[i])
			{
				pos=i;
				i=n;
			}
			
		}
		if(pos!=-1)
		{
			printf("el numero esta en la posicion %d",pos);
			salir=false;
		}
		else
		{
			printf("el numero no se encontro siga buscando \n");
		}
	}while(salir);
	
}
