/*se solicita al usuario que ingrese 10 numeros de dni sin puntos,por cada dni se solicita un sueldo x horas,horas trabajadas, años de antiguedad.
una vez ingresado lo solicitado  se mostrara una lista que diga:
el empleado con DNI ............,cobra un sueldo por hora de.............,trabajo..........horas ,su plus por los....... años de antiguedad es......... y su sueldo
a cobrar es $...........,
la antiguedad se calcula de 0 a 5 años %10, 6 a 10 años %15, mas de 15 años 25%.*/
#include<stdio.h>
#include<stdlib.h>

main()
{	//se puede poner al reves [6]lineas donde almacenas las variables y[10]la cantidad de datos que vas a almacenar en las variables
	system("color a");//pongo las letras en rojo cuando ejecutas el programa
	int matriz[10][6];  //en el primer corchete van siempre las lineas[10]y en las lineas van  donde se almacenan los datos  
	 					//y[6] son las cantidad de variables donde se van a almacenar que van hacer las columnas
	for(int f=0;f<10;f++)//filas
	{
		for(int c=0;c<6;c++)//columnas
		{
			matriz[f][c]=0;
			printf("|%d|",matriz[f][c]);//imprime la matris para saber que la deje en 0 para eliminar archivos vasura
		}
	}
	printf("\n");
	//cargar dni
	for(int f=0;f<10;f++)//recorre las 10 filas de la variable dni y cargas 10 datos en esa variable
	{
		for(int c=0;c<1;c++)//arranca de 0 y es menor a 1 asiq se guarda en la columna 0 siempre arranca de 0 tanto lineas como columnas
		{			//[%d][%d] esto en el printf muestra el lugar de filas y columnas donde se almacenan y f,c es por el nombre de las variables de los dos for
			printf("ingrese los numeros de dni[%d][%d]\n",f,c);//muestra que en la columna 0 que es dni se almacenan 10 datosque arranca de [0][0]
			scanf("%d",&matriz[f][c]); //la matris [f][c] porque ya esta especificado en los dos for que va en las filas y en columnas	//  [1][0]		
		}					//matriz [f][0]																											//	[2][0]
	}
		printf("\n");
	//cargar sueldo x hs
	for(int f=0;f<10;f++)
	{
		for(int c=1;c<2;c++)//carga sueldo por hs y va a recorrer las 10 filas y en columna 1 va almacenar la variable sueldoxhs			[0][1]
		{																																//  [1][1]
			printf("ingrese el sueldo por hs[%d][%d]\n",f,c);																			//  [2][1]
			scanf("%d",&matriz[f][c]); 		//seria asi por si necesitas acordarte donde se almacena [f][1]
		}
	}
		printf("\n");
	//cargar hs trabajadas
	for(int f=0;f<10;f++)
	{
		for(int c=2;c<3;c++)
		{
			printf("ingrese horas trabajadas[%d][%d]\n",f,c); //carga hs trabajadas t con el printf se muestra asi [0][2]
			scanf("%d",&matriz[f][c]);//matriz [f][2] por eso el dos cuendo cargas siempre sigue en esa posicion// [1][2]
		}																										// [2][2]
	}
		printf("\n");
	//cargar años de antiguedad
	for(int f=0;f<10;f++)
	{
		for(int c=3;c<4;c++)
		{
			printf("años de antiguedad[%d][%d]\n",f,c);
			scanf("%d",&matriz[f][c]);//aca seria que se guarda en matriz[f][3]
		}
	}
	system("pause");//pausa el sistema y imprime por pantalla que preciones una tecla para continuar
	system("cls");//limpia la pantalla de los datos ingresados anteriormente que son dni hstrabajadas,etc.... si los das vuelta y pones este arriba del pause queda mas lindo jjaja
	printf("\n");
	//se guarda el plus en matriz[f][4] osea la cuarta columna las anteriores columnas tiene años de antiguedad,dni,etc
	for(int f=0;f<10;f++)
	{
		for(int c=4;c<5;c++)
		{
			matriz[f][c]=matriz[f][1]*matriz[f][2]; //se guarda el sueld a cobrar sin el plus que es matriz[f][4]
		}
	}
	for(int f=0;f<10;f++)	//matriz [f][5]
	{
		for(int c=5;c<6;c++)
		{
			if(matriz[f][3]<=5) //si tiene esta antiguedad mayor igual 5 va por este if
			{
				matriz[f][c]=(matriz[f][4]*10)/100; //el plus por antiguedad [f][5] lo demas es el calculo matematico para sacar el plus 
			}	
			else// sino
			{	//si
				if(matriz[f][3]>5&&matriz[f][3]<=10)//si antiguedad que se guarda en matriz[f][3] que esta al principio de los datos a cargar es mayor 5 y menor igual 10 va por este verdadero
				{
					matriz[f][c]=(matriz[f][4]*15)/100;
				}
				else//sino como seria en logica con el programa en pseint
				{	//si
					if(matriz[f][3]>10&&matriz[f][3]<=15)
					{
						matriz[f][c]=(matriz[f][4]*20)/100;
					}
					else
					{
						if(matriz[f][3]>15)
						{
							matriz[f][c]=(matriz[f][4]*25)/100;
						}
					}
				}
			}
		}
	}
	for(int f=0;f<10;f++)
	{
		for(int c=6;c<7;c++)
		{
			matriz[f][c]=matriz[f][4]+matriz[f][5];//se guarda el sueldo total matriz [f][6] si ves arriba declare una matriz [10][6]asiq es ese 6 es el limite de columnas
		}											//si queres agregar mas columnas agranda el numero arriba de las columnas...
	}
	for(int f=0;f<10;f++)//va a recorrer las 10 filas donde hay datos guardados pero falta especificar que columna tiene que recorrer que es donde esta las variables 
	{					//	por eso tenes que especificar en q columna queres que recorra las 10 posiciones.
		printf("el empleado con DNI %d\n",matriz[f][0]);//por eso las lineas va a ser [f] porque esta especificado con el for lo q tiene q hacer y el[0]es donde se almaceno la variable dni
		printf("cobra un sueldo por hs de $ %d\n",matriz[f][1]);//aca las lineas especificadas con el for que va a ser 10[f] y va a ser la variable sueldoxhs[1] las demas son lo mismo
		printf("trabajo %d horas\n",matriz[f][2]);
		printf("su plus por %d años de antiguedad es %d\n",matriz[f][3],matriz[f][5]);
		printf("su sueldo a cobrar es de %d\n",matriz[f][6]);
		printf("\n");
	}
	printf("\n");
}
