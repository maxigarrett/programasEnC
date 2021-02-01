#include<stdio.h>
#include<stdio.h>
#include<conio.h>
main(){
	                                             
	int cantidad,d,f,total;                                                
	printf("ingrese cantidad\n");
	scanf("%d",&cantidad);
	int vector[cantidad];
	for(int i=0;i<cantidad;i++){
		vector [i]=0;
	}
	for(int i=0;i<cantidad;i++){
		printf("ingrese un numero\n");
		scanf("%d",&d);
		vector [f]=d;
	} 
	for(int c=0;c<cantidad;c++){
		total+=vector[c];
		printf("%d \n",vector[c]);
		printf("la suma del contenido del vector es: %d",total);  
	}
	                                                                     
}
	

