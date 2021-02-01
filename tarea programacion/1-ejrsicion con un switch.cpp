#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{	//variable para capturar la opcion qu se dese ingresar
	int op, edad,operacion;
	system("color c");
	do{
	
	//menu
	printf("\n");
	printf("*******************************************************************************************************\n");
	printf("ingrese las opcion para ver el ejersicio a realizar\n 1-primer ejersicion\n 2-segundo ejersicio\n");
	printf(" 3-tercer ejersicio\n 4-cuarto ejersicio\n");
	scanf("%d",&op);
	if(op==0 || op>=5){
	printf("valor incorrecto ingrese valor 1,2,3,4 para entrar al menu\n");}
	printf("*******************************************************************************************************\n");
	//empesar hacer el menu dependiendo de la opcion que el usuario digite en este caso(1,2,3,4)
	switch(op)
	{ //toma el primer num
		case 1:
		{	
			int num;
			printf("usted digito ejercicio 1:\n");
			printf("pida por teclado un numero y muestre por pantalla el numero anterior y posterior\n");
			printf("ahora proceda a digitar el numero para realizar la consigna\n");
			scanf("%d",&num);
			printf("\n");
			printf("el numero anterior al que usted ingreso es: %d",num-1);
			printf("\n");
			printf("el numero siguiente del que usted ingreso es: %d",num+1);
			break;
			
		}
		
		
		
		//toma segundo num
		case 2:	
		{	
			printf("\n");
			int operacion;
			printf("usted escogio el ejersicio 2\n");
			printf("muestre el listado de los posibles colores en los que puede estar un semaforo, con sus numeros ");
			printf("asociados y a continuacion se le solicita al usuario que ingrese un numero asociado con el color ");
			printf("y muestre el significado del color y si ingresa un valor invalido que muestre un error\n");
			printf("\n");
			printf("1-verde\n 2-amarillo\n 3-rojo\n");
			scanf("%d",&operacion);
			switch(operacion)
			{
				case 1:
					printf("verde puede avanzar");
					break;
				case 2:
					printf("amarillo preparese");
					break;
				case 3:
					printf("rojo frene");
					break;	
					
						
			}
			printf("\n");
				break;
			
		}
		
		
	
		
		
		
		case 3:
		{
			int edad;
		
			printf("usted eligio ejersicio 3\n");
			printf("pida por teclado la edad y decir si es bebe adolecente etc...\n");
			printf("\n");
			printf("ingrese la edad que dese\n");
			scanf("%d",&edad);
			//condicion para que tire el mensaje es la parte verdadera
			if(edad<=0)
			{
				printf("incorrecto esa edad no existe");
			}
			else//parte falsa
			{
				if(edad<=1)
				{
					printf("es un bebe");
				}
			
				else
				{
				
				
					if(edad<=12)
					{
						printf("es un ninio\n");
					}
				
					else{
					
					if(edad<=17)
					{
						printf("adolecente\n");
					}
				
					else
					{
						if(edad<=30)
						{
							printf("joven");
						}
					
					if(edad<64)
					{
						printf("adulto");
					}
					else
					{
						if(edad<120)
						{
							printf("anciano\n");
						}
					
					if(edad>120)
					{
						printf("error la edad es muy alta \n");
					}
					
						
					
				
			}}}}	}
		
		
	break;	
	}
	case 4:
	{
		printf("ejrsicio 4\n");
		printf("\n");
		printf("pida por teclado un numero.repita el paso numero 1, mientras queel numero ");
		printf("introducido sea distinto a 0.muestre por pantalla la suma de los numeros pares e impares introducidos por el usuario\n");
		printf("\n");
		int num,par=0,inpar=0;
		printf("ingrese un numero\n");
		scanf("%d",&num);
		
		printf("\n");
	while(num!=0)
	{	
		
		
		if(num %2==0)
		{	par+=num;
			
		}
		else
		{	
			inpar+=num;
		
		}
		printf("ingrese un numero\n");
		scanf("%d",&num);
		
					
		
	}
	printf("\n");
	printf("numeros impares sumados son:\n%d",inpar);
	printf("\n");
	printf("numeros pares sumados son:\n%d",par);
	printf("\n");
		
	break;		
	
	
}

}
printf("\n");
printf("ingrese num 1- para volver a entar al menu o 0- para salir \n");
scanf("%d",&op);
}
while(op!=0);

}
