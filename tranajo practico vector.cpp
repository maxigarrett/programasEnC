#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
char resp;
int cant,m;
int aux;



do{

printf("ingrese la cantidad de numneros que desea ordenar\n");
scanf("%d",&cant);
int vector[cant];
printf("ingrese numeros \n");
for(int i=0;i<cant;i=i+1){
	scanf("%d",&vector[i]);
	printf("\n");
}
printf("ordena de mayor a menor (0) de menor a mayor (1)\n");
scanf("%d",&m);
for(int i=0;i<cant;i++)
for(int j=i+1;j<cant;j++)
if(m==0)
{
	if(vector[i]<vector[j])
	{
		aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
	}
}
else
{
	if(vector[i]>vector[j])
	{
		aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
	}
}
	
printf("\n");
printf("lista ordenada de los numeros\n");
for(int i=0;i<cant;i++){
	
	printf("%d\n",vector[i]);
	printf("\n");
}	
printf("desea ingresar nuevos numeros (s/n) \n");
scanf("%s",&resp);

}




while(resp=='s'||resp=='S');


}




