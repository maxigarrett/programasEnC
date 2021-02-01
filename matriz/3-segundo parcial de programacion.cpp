#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int n=0,op=0;
	bool salir=true;
	system("color a");
	printf("ingrese la cantidad de alumnos que desea\n");
	scanf("%d",&n);
	int	matriz[n][5]; //dimenciono la matriz en la casilla[n] van las lineas que van a ser la cantidad de veces que queres ingresarle datos a la viarable que estan en la columna dimencionada con[5]
	for(int f=0;f<n;f++)//este for son las lineas 
	{
		for(int c=0;c<5;c++)// en este for van las variables en columnas [5]
		{
			matriz[f][c]=0; // pongo matriz [f][c] porque ya declare el los dos for lo q va entre los corchetes osea en [f]=n y [c]=5 les pongo igual a 0 por las dudas que aya basura en esa posicion de memoria
		}
	}
	for(int f=0;f<n;f++)// a diferencia del trabajo practico que te pase.En este caso vamos a trabajar con un solo for que es menos engorroso
	{					// el for de columnas que es donde yo quiero que valla las variables directamente se lo declaras en donde queres que valla de esta forma: matriz[f][0]
		printf("ingrese el dni del alumno [%d]\n",+f);
		scanf("%d",&matriz[f][0]);//ahorramos un for ya que como dije antes vos le decis en donde queres que valla la variable DNI que en este caso va a ir en la columna [0] que en un for seria asi for(int c=0;c<1;c++)
		printf("ingrese la nota del primer parcial[%d]\n",+f);
		scanf("%d",&matriz[f][1]);// de la misma forma poniendo matriz[f]que ya esta especificado en el for que va a ser las veces que el usuario quiere que recorra los datos.... y matriz[1] va a ser la columna donde se almacena la variable primer parcial
								// y en el for de las columnas se pondria asi for(int c=1;c<2;c++) quiere decir que va a inicializar en columna 1 hasta menor a 2 osea que a dos nunca va a llegar y se queda en posicion de columna 1.....
		printf("ingrese la nota del segundo parcial [%d]\n",+f);
		scanf("%d",&matriz[f][2]);// lo mismo para esta. el for(int c=2;c<3;c++) va a quedar en columna 2 poque en el for dice que va a ser menor a tres entonces nunca va a llegar a 3 y queda en posicion de columna 2
		printf("ingrese la nota del trabajo practico [%d]\n",+f);//si no entendes donde iria el for de las columnas en el trabajo practico que te mande esta el for anidado y explicado
		scanf("%d",&matriz[f][3]);
	}
	system("cls");//limpia la pantalla anterior donde cargas los datos
	system("pause");//imprime por pantalla que oprima una tecla para continuar y pausando el sistema hasta no oprimir  la tecla
	do{//ciclo do while para repetir el switch 
	
	
	printf("0-salir\n1-mostrar aprobados promedio mayor 7\n2-mostrar que alumno desaprobo y que parcial o los dos\n3-buscar dni\n");
	scanf("%d",&op);//captura la opcion que queres realizar
	switch(op)//o if anidados
	{
		case 0:
		{
			salir=false; //con la bariable bool te permite salir digitando la opcion 0
			break;
		}
		case 1:
		{	
			
			for(int f=0;f<n;f++)//filas
			{
				matriz[f][4]=(matriz[f][1]+matriz[f][2]+matriz[f][3])/3;//promedio matriz[f][4] osea creo una nueva variable que es promedio y se almacena en columna 4 que todavia nunca la utilizamos
				if(matriz[f][4]>=7) //matriz[f][4] que es el promedio pregunta si matriz[f][4] es mayor igual a 7 en caso de que sea verdadero imprime el mensaje
				{
					printf("el dni %d aprobo con promedio de %d",matriz[f][0],matriz[f][4]); //matriz[f][0] fijate para corroborar que es donde se almacenan los dni y matriz[f][4] va a mostrar el promedio
				}
			}
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			for(int f=0;f<n;f++)//filas
			{
				if(matriz[f][1]<7&&matriz[f][2]<7) //pregunta si matriz[f][1]que es el primer parcial es menpr a 7 &&significa (y)...matriz[f][2] que sertia segundo parcial
				{									//es tambien menor a 7 si se cumple esta condicion va a imprimir el mensaje dentro de los corchetes del if...
					printf("el alumno con dni %d desaprobo el primer y segundo parcial\n",matriz[f][0]);//muestra el dni que desaprobo el primer y segundo parcial matriz[f][0] esa matriz donde se guardan los DNI
				}
				else// seria el sino de logica osea sino se cumple la condicion del primer if pasa al siguiente
				{
					if(matriz[f][1]<7)//si matriz [f][1] que es primer parcial es menor a 7 y siempre fijate arriba donde llenaste la matriz para no errarle  cuando pones en q columna esta esa variable jaja..
									//	imprime el mensaje dentro del segundo if o condicion
					{
						printf("el alumno con dni %d desaprobo el primer parcial con %d\n",matriz[f][0],matriz[f][1]);//imprime el DNI que esta en matriz[f][0] y primer parcial que es matriz[f][1]
					}
					else//sino se cumple el segundo if  va por la siguiente condicion
					{
						if(matriz[f][2]<7)//tercer if dice que si matriz[f][2] que seria segundo parcial es menor a 7,si se cumple la condicion imprime el mensaje entre las llaves de este if
						{
							printf("el alumno con dni %d desaprobo el segundo parcial con %d \n",matriz[f][0],matriz[f][2]);//matriz[f][0]guarda la varible dni matriz[f][2] guarda el segundo parcial
						}
					}//sierra el segundo else
				}//sierra primer else
			}
			getch();//pausa el sistema
			system("cls");//limpia la pantalla
			break;
		}
		case 3:
		{
			int buscardni=0;//bariable para buscar un dni existente 
			int	b=0;//declaro una bariable b para saber si esxiste o no el dni
			printf("digite el dni a buscar\n");
			scanf("%d",&buscardni);//una vez digitado el dni pasa al for a recorrer las posiciones anteriormente digitado por el usuario y ve si el dni existe
			for(int f=0;f<n;f++)//ciclo que rrecorre
			{
				b=1;
				if(buscardni==matriz[f][0])//si buscardni que es la variable anteriormente declarada es igual a matriz[f][0] que son los dni guardados en la matriz entra por el verdadero de esta condicion
				{//y muestra el dni encontrado con sus respectivos datos
					printf("el alumno con dni %d\n",matriz[f][0]);
					printf("su primer parcial es de %d\n ",matriz[f][1]);
					printf("su segundo parcial es de %d\n",matriz[f][2]);
					printf("y la nota del trabajo practico es %d\n",matriz[f][3]);
					printf("\n");
				}
				else//parte falsa
				{
					b=0;
				}
			}	
				if(b==0)//si b que es la parte falsa ateriormente declarada  es igual a 0 osea que va a ser distinto del dni que se guardo, va a imprimir el mensaje que no se encuentra 
				{
					printf("el dni del alumno no se encuentra\n");
				}
			getch();//pausa el sistema
			system("cls");//limpia la pantalla
			break;
		}
	}
}while(op!=0);//finaliza el do while y se va a repetir hasta es lo mismo decir while(salir); como esta declarado en el case 0
}
