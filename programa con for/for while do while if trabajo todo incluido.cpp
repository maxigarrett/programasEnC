#include<stdio.h>
#include<stdlib.h>
main(){
	int cantidad,nota;
	int op,num;
	int suma;
	char desicion;
	int contador;
	do{
	
	printf("ingrese la opcion que desea\n");
	printf("\n");
	printf("1_for\n");
	printf("2_while\n");
	printf("3_do while\n");
	scanf("%d",&op);
	
	
	switch(op){
		case 1:
		printf("\n");
		printf("usted ingreso la opcion for\n");
		printf("\n");	
		printf("cuantas notas desea ingresar\n");
		scanf("%d",&cantidad);
		for(int i=1;i<=cantidad;i++);
		printf("ingrese la nota\n");
		scanf("%d",&nota);
		break;
		
		case 2:
		fflush(stdin);	
		printf("usted eligio opcion while, esta de acuerdo s/n \n");
		scanf("%c",&desicion);
		while(desicion=='s'|| desicion=='S'){
		printf("ingrese cantidad de notas que desea\n");
		scanf("%d",&cantidad);
		printf("ingrese la nota\n");
		scanf("%d",&nota);
		suma=cantidad*nota;
		printf("la nota es %d",suma);
		break;	
		}
		case 3:
			fflush(stdin);
	default:
		printf("usted eligio la opcion 3,pero ya esta como ciclo de los otros case\n");	
		printf("\n");
		printf("\nintente nuevamente\n");
		break;		
	}}
	while(op<=3);



}
