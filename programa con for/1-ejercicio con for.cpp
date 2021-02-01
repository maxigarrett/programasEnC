//ejercicio que pide mostrar si los numeros son primos o no
#include<stdio.h>
#include<stdlib.h>
main(){
	int num,i;
	
	printf("introduzca numero para decidir si es primo \n");
	scanf("%d",&i);
	
	for(int i=1; i<=num;i++){
		if(num%i==1||num%i==2||num%i==0){
		printf("%d son primos");	
		}
		else{
		printf("%d no son primos");	
		}
			
			
			
		}
	}

