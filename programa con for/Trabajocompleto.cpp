# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main(){
	int op;
	char a;
	int b;
	system("color c");
	
	do{// comienza con un do
	fflush(stdin);
	printf("Que decea hacer:\n1_For\n2_While\n3_If\n");
	scanf("%d",&op);	
	switch(op){
		
		case 1:{
		
		
			int numero;
			printf("Vamos a crear un ciclo for y este tendra una cantidad de ciclos dependiendo la que ud desee:\n");
			printf("Es por eso que le pedire que ingrese un numero: \n");
			scanf("%d",&numero);
			
			for(int i=1; i<=numero;i++){
				printf("esta es la vuelta Numero %d",i);
				printf("\n");		
			}
			fflush(stdin);
			break;
		}
			case 2:{
			int	b=0;
				fflush(stdin);
				printf("Estamos a punto de Crear un ciclo While");
				printf("\nque desea hacer:\nA_Salir. \nB_Crear.\n");
	           	scanf("%c",&a);
	           	while(a=='B'|| a=='b'){
	           		fflush(stdin);
	           		b++;
	           		printf("Entraste al Ciclo While %d\n",b);
	           		printf("Que desea hacer:\n A_Salir\n B_Continuar en el Ciclo\n");
	           	scanf("%c",&a);
	           		
				   }
				
				break;
			}
				
				
			case 3:{
				fflush(stdin);
				printf("Estamos a punto de crear una desición IF verdad o falso\n");
				printf("La condicion es, si la nota es mayor o igual a 7 promociona, si es entre 4 y 6 va a final, menor que 4 recupera\n");
				printf("Ingrese nota:\n");
				scanf("%d",&b);
				if(b>=7){
					printf("Ud. a Promocionado su nota es %d \n",b);
				}else{
					if(b<=4){
						printf("Ud. va a Final su nota es %d \n",b);
					}else{
						printf("Ud. debe recuperar su nota es %d \n",b);
											}
				}
				break;
			}
				
			default :{
				printf("Opcion invalidad, ingrese 1, 2 o 3\n");
				fflush(stdin);
				break;
			}		
	          }
	          fflush(stdin);
	printf("Desea Salir\n S/N\n");
	scanf("%c",&a);
		
}while(a=='N'|| a=='n');
}
