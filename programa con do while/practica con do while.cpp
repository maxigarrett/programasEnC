# include <stdio.h>
# include <stdlib.h>
int main(){
	int op;
	char nombre , apellido;
	float n1, n2,pro;
	do{
	printf("ingrese el nombre \n");
	scanf("%s",&nombre);
	printf("\n");
	printf("ingrese el apellido\n");
	scanf("%s",&apellido);
	printf("\n");
	printf("ingrese numero 1\n");
	scanf("%f",&n1);
	printf("\n");
	printf("ingrese numero 2\n");
	scanf("%f",&n2);
	printf("\n");
	pro=(n1+n2)/2;
	printf("el promedio es %.2f\n",pro);
	
	printf("ingrese 0 para salir\ningrese 2 para calcular el promedio");
	scanf("%d",&op);
	}
	while(op!=0);
	printf("gracias");
}
