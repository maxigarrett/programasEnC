#include<stdio.h>
#include<stdlib.h>
#include<math.h>      //para las potencias
main(){
	char condicion ;
	float b; //base
	float h;//altura
	float r;//radio
	int op;
	float resultado;
	
	printf("quiere continuar si/no \n");
	scanf("%c",&condicion);
	while(condicion=='s'){
	printf("1_circulo\n 2_cuadrado\n 3_triangulo\n 4_rectangulo\n");
	scanf("%d",&op);
	
	switch(op){
	case 1:
	printf("ingrese el radio\n");
	scanf("%f",&r);
	resultado=M_PI* pow(r,2);          //pow significa potencia
	printf("el perimetro del circulo es %f",resultado);
	break;

	case 2:
	printf("ingrese numero el base para calcular el cuadrado\n");
	scanf("%f",&b);
	printf("ahora ingrese la altuta para realizar el calculo\n");
	scanf("%f",&h);
	resultado= (b*h)*2;
	printf("el area del cuadrado es %f",resultado);
	printf("\n");
	break;
		
	case 3:
	printf("ingrese el numero para calcular el area del triangulo \n");
	scanf("%f",&b);
	printf("ahora ingrese la altura\n");
	scanf("%f",&h);
	resultado=b*h /2;
	printf("el area del triangulo con los valores ingresados es %f",resultado);
	printf("\n");
	break;	
	
	case 4:
	printf("ingrese un numero para calcular la base del rectangulo\n");
	scanf("%f",&b);
	printf("a continuacion ingrese la altura para finalizar el calculo\n");
	scanf("%f",&h);
	resultado=b*h;
	printf("el area del rectangulo es %f",resultado);
	break;	
	
	}	
	}
}
