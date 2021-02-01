# include <stdio.h>
# include <stdlib.h>
main(){
	int e;
	printf("bienvenido a la seleccion de meses\n");
	printf("enero\n");
	printf("febrero\n");
	printf("marzo\n");
	printf("abril\n");
	printf("mayo\n");
	printf("junio\n");
	printf("julio\n");
	printf("agosto\n");
	printf("septiembre\n");
	printf("octubre\n");
	printf("noviembre\n");
	printf("diciembre\n");
	printf("\n");
	do{
		
	printf("ingrese el numero del mes que desee del 1 al 12\n");
	scanf("%d",&e);
	
	switch(e){
	case 1:
		printf("mes de enero\n");
		break;
		
	case 2:
		printf("mes de febrero\n");
		break;
	
	case 3:
		printf("mes de marzo\n");
		break;
		
	case 4:
		printf("mes de abril\n");
		break;
		
	case 5:
		printf("mes de mayo\n");
		break;
		
	case 6:
		printf("mes de junio\n");
		break;
		
	case 7:
		printf("mes de julio\n");
		break;
		
	case 8:
		printf("mes de agosto\n");
		break;
		
	case 9:
		printf("mes de septiembre\n");
		break;
		
	case 10:
		printf("mes de octubre\n");
		break;
		
	case 11:
		printf("mes de noviembre\n");
		break;
		
	case 12:
		printf("mes de diciembre\n");
		break;
		
	default:
		printf("numero de mes invalido\n");
		printf("\n");
		printf("por favor ingrese el numero del mes correcto\n");
		printf("\n");											
	}
		printf("ingrese el numero del mes que desee del 1 al 12\n");
		scanf("%d",&e);
	}while(e<1 || e>12);
	
}

