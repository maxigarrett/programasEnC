/*se solicita al usuario que ingrese 10 numeros de dni sin puntos,por cada dni se solicita un sueldo x horas,horas trabajadas, años de antiguedad.
una vez ingresado lo solicitado  se mostrara una lista que diga:
el empleado con DNI ............,cobra un sueldo por hora de.............,trabajo..........horas ,su plus por los....... años de antiguedad es......... y su sueldo
a cobrar es $...........,
la antiguedad se calcula de 0 a 5 años %10, 6 a 10 años %15, mas de 15 años 25%.*/

//biblibotecas
#include<stdio.h>
#include<stdlib.h>



main()
{
	system("color c");//cambia de color las letras del ejecutable
	
	//posiciones del vector que va a tener cada variable
	int dni[10];
	int sueldoxhs[10];
	int hstrabajadas[10];
	int aniosant[10];
	int op;
	//inicializamos las variables en 0 par si esa ubicacion en la memoria donde almacena los datos de las variables tiene algun dato ya almacenado
	for(int a=0;a<10;a++)
	{
		dni[a]=0;
		sueldoxhs[a]=0;
		hstrabajadas[a]=0;
		aniosant[a]=0;
		
	}
	//hacemos un ciclo for donde recorra las 10 veces las 10 posiciones de cada variable para ir llenandolas con sus datos
	for(int i=0;i<10;i++)
	{
		printf("ingrese los numeros de DNI del empleado : [%d]\nDNI:",+i);// esa +i imprime el numero 0 donde se inicializa el vector hasta donde valla depende las 
		scanf("%d",&dni[i]);											  //posiciones que se le dio al vector para saber que vector se esta llenando
		printf("ingrese sueldo por horas:[%d]\nSUELDO POR HS:"+i);
		scanf("%d",&sueldoxhs[i]);
		printf("ingrese las horas trabajadas:[%d]\nHORAS TRABAJADAS:",+i);
		scanf("%d",&hstrabajadas[i]);
		printf("ingrese anios de antiguedad:[%d]\nANIOS DE ANIGUEDAD:",+i);
		scanf("%d",&aniosant[i]);
		printf("\n");
	}
	
	int plus[10];
	int sueldototal[10];
	//ciclo for para calcular el plus y el sueldo total
	for(int f=0;f<10;f++)
	{
		if(aniosant[f]<=5)// si la antiguedad es menor igual a 5 va a ir por el verdadero y hace el calculo ya explicado en el siguiente paso
		{	
			plus[f]=((sueldoxhs[f]*hstrabajadas[f])*100)/10;//saca el plus que le corresponde por horas y sueldo por horas trabajadas por su antiguedad que es 10%
			sueldototal[f]=(sueldoxhs[f]*hstrabajadas[f])+plus[f];//saca el sueldo total multiplicando hstrabajadas por sueldoporhora ma el plus que se calculo antes
		}
		else
		{
			if(aniosant[f]>=6&&aniosant[f]>=10)
			{
				plus[f]=((sueldoxhs[f]*hstrabajadas[f])*100)/15;
				sueldototal[f]=(sueldoxhs[f]*hstrabajadas[f])+plus[f];
			}
			else
			{
				if(aniosant[f]>=11&&aniosant[f]<=15)
				{
					plus[f]=((sueldoxhs[f]*hstrabajadas[f])*100)/20;
					sueldototal[f]=(sueldoxhs[f]*hstrabajadas[f])+plus[f];
				}
				else
				{
					if(aniosant[f]>15)
					{
						plus[f]=((sueldoxhs[f]*hstrabajadas[f])*100)/25;
					sueldototal[f]=(sueldoxhs[f]*hstrabajadas[f])+plus[f];
					}
				}
			}
		}
	}
	//imprime los datos ingresados anteriormente por el usuario recorriendolo con el ciclo for
	for(int x=0;x<10;x++)
	{
		printf("el DNI:%d\n",dni[x]);//imprime los 10 dni ingresados
		printf("cobra sueldo por hora de :%d\n",sueldoxhs[x]);//imprime los 10 sueldo por horas
		printf("trabajo %d\n",hstrabajadas[x],"horas\n");//imprime las 10  horas trabajadas
		printf("su plus por los %d anios de antiguedad es: %d\n",aniosant[x],plus[x]);//imprime 10 veces años de antiguedad y lo que le corresponde por esa antiguedad
		printf("su sueldo a cobrar es$: %d\n",sueldototal[x]);//imprime 10 veces el sueldo totas  
	}
		int num;
	
	
	printf("\n");
	int numdni;
	int n=0;
	do //habro ciclo do while para repetir lo que se encuente adentro
	{
	
		printf("ingrese el numero de dni para ver si se encuentra\n");
		scanf("%d",&numdni);
	
		for(int x=0;x<10;x++)
		{	n=1;
			if(numdni==dni[x])
			{
				printf("el dni se encuentra es %d\n",dni[x]);
				printf("su sueldo por hs es %d\n",sueldoxhs[x]);
				printf("trabajo %d\n",hstrabajadas[x],"horas\n");
				printf("su plus por los %d anios de antiguedad es: %d\n",aniosant[x],plus[x]);
				printf("su sueldo a cobrar es $: %d\n",sueldototal[x]);
				
		    }
			else
			{
				n=0;
			}
	    }	
	  if(n==0)
	  {
	  	printf("el dni no se encontro\n");
	  }
		printf("\n");
		printf("desea buscar un nuevo dni 0 para salir 1 para seguir\n");//imprime por pantalla la condicion para salir del ciclo
		scanf("%d",&n);//captura el numero para que se cumpla o no la condicion
	}
	while(n!=0);//finalisa el ciclo do while y es la condicion para que deje de repetir

}
