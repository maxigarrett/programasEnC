#include <stdio.h>
#include <stdlib.h>
main() {
	int op;
	float n1,n2,pro;
	char nombre, apellido;
	printf(" ingrese 1 para calcular el promedio \n");
	scanf("%d",&op);
	
	while(op!=0){
		printf("ingrese nombre \n ");
		scanf("%s",&nombre);                    //la s sirve para tomar char
		
		printf("ingrese apellido\n");
		scanf("%s",&apellido);
		
		printf("ingrese numero 1\n");
		scanf("%float",&n1);
		
		printf("ingrese numero 2\n");
		scanf("%float",&n2);
		pro=(n1+n2)/2;
		printf("el promedio es %.2f \n",pro);
		printf("ingrese 0 para salir\n 1 para calcular promedio\2");
		scanf("%d",&op);
		
	}
	printf("chau");
}
