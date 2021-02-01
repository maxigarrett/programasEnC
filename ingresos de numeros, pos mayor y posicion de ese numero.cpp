//ingrese varios numeros y decir cual es el mayor y decir cual es la osicion del vector
#include<stdio.h>
main(){
	
	int num=0,cant=0,mayor=0,menor,posmayor=0,posmenor=0;
		printf("Ingrese cantidad de numero a ingresar:");
			scanf("%d",&cant);
	int vector[cant];
	
	//for(int i=0;i<cant;i++){
	//	vector[i]=0;
	//}
	for(int a=0;a<cant;a++){        //cargo vector
			printf("\nIngrese un numero:");
				scanf("%d",&num);
		vector[a]=num;
		
	
		if (vector[a]>=mayor){ //asigno numero mayor a mayor y guardo pos
			mayor=vector[a];
			posmayor=a;	
		}else{
		
		
			if (vector[a]<=menor){ //asigno numero menor a menor y guardo pos
				menor=vector[a];
				posmenor=a;
	}
		}
	}
	
			printf("\nEl mayor es: %d y la posicion es %d",mayor,posmayor);
			printf("\nEl menor es: %d y la posicion es %d",menor,posmenor);
}
