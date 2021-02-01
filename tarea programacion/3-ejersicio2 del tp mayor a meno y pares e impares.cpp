/*se solicita al usuario que ingrese 20 numeros. una vez ingresados los numeros tendra el siguiente menu
0-salir
1-mostrar los pares
3-sumar todos los numeros
4-ordenar de mayor a menor y mostrarlo
5-mostrar de menor a mayor(sino esta ordenado informar que lo va a ordenar)*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{	
	system("color c");
	bool salir=true;
	int op,num=0,suma=0,aux=0,a;
	int vector[20];
	
	
	printf("ingresa  numeros para calcular esos numeros en el siguiente menu\n");
	printf("\n");
	for(int i=0;i<20;i++)
	{	
		printf("ingrese un num para cargar el vector[%d]\n",+i);
		scanf("%d",&vector[i]);
		printf("\n");
		
	}
	system("cls");
	do{
	printf("una ves ingresada la opcion que quiere oprima ENTER para volver al menu a elegir otra opcion\n");	
	printf(" 1-salir\n 2-mostrar pares\n 3-mostrar impares\n 4-sumar todos los numeros\n 5-ordenar de mayor a menor\n 6-ordenar de menor a mayor\n");
	scanf("%d",&op); 
	
	switch(op)
	{
		
		case 1:
		{
			salir=false;
			break;
		}
		case 2:
		{	
			 
			printf("opcion 1 mostrar pares\n");
			
				
			for(int i=0;i<20;i++)
			{
				if(vector[i]%2==0)
				{
					printf("los num pares son:_%d\n",vector[i]);
				}
				
			}
			
			getch();
			system("cls");
			break;
			
		}
		case 3:
		{
			for(int f=0;f<20;f++)
			{
				if(vector[f]%2==1)
				{
					printf("los num imares %d\n",vector[f]);
				}
			}
			getch();
			system("cls");
			break;
		}
		case 4:
		{
			suma=0;
			printf("opcion 3 sumar todos los numeros\n");
			for(int i=0;i<20;i++)
			{
				suma=suma+vector[i];
					
			}
			printf("la suma de los numeros es:%d\n",suma);
			getch();
			system("cls");
			break;
		}
		
		case 5:
		{
			 aux=0;
				for(int i=0;i<20;i++)
			{
			 
					for(int j=i+1;j<20;j++)
				{	
			
						if(vector[i]<vector[j])
						{
							aux=vector[i];
							vector[i]=vector[j];
							vector[j]=aux;
						}
				}
			}
			printf("numeros ordenados de mayor a menor\n");
			for(int i=0;i<20;i++)
			{
				printf("%d\n",vector[i]);
			}
			getch();
			system("cls");
			break;
		}
		case 6:
		{	fflush(stdin);
			printf("opcion 6 ordenar de menor a mayor\n");
			aux=0;
			for(int m=0;m<20;m++)
			{	
				for(int f=m+1;f<20;f++)
				{	
					if(vector[m]>vector[f])
					{
						aux=vector[m];
						vector[m]=vector[f];
						vector[f]=aux;
					}
				}
			}
			fflush(stdin);
			for(int i=0;i<20;i++)
			{
				printf("%d\n",vector[i]);
			}
				getch();
				system("cls");
			break;
				
		}	
	}
	
}
	
while(op!=1);
printf("chau");
}
