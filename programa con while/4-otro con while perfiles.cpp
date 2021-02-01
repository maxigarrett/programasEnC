// una planta que fabrica perfiles de hierro posee un lote de n peza.
//confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil;sabiendo que la pieza cuya
//longitud este comprendida en el rango de 1.20y1.30 son aptas.imprimir en pantalla la cantidad de piezas aptas que  hay en un lote.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int num,x=0,cantidad=0;
	float largo;
	printf("ingrese las piezas de perfiles que tenga\n");
	scanf("%d",&num);
	
	while(x<num)
	{
		x=x+1;
		printf("ingrese la medida o largo de las piezas:\n");
		scanf("%f",&largo);
		if(largo>=1.20 && largo<=1.30)
		{
			cantidad=cantidad+1;
		}
		
		
	}
	printf("la cantidad de perfiles aptos son:%d\n",cantidad);
	
}
