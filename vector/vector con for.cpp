#include<stdio.h>
#include<stdio.h>
main(){
	int vector[10]; //posiciones del vector
	for(int i=0;i<10;i++){     //hasta donde va las posiciones expresadas en for
		vector[i]=i*2;          //i*2 multiplica todos los valores del 0 al 9 por 2
	}
	for(int f=0;f<10;f++){
		printf("%d \n",vector[f]);
	}
}
	

