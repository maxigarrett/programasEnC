#include <stdio.h>
#include <stdlib.h>

main(){

	int i;
	printf("lunes\n");
	printf("martes\n");
	printf("miercoles\n");
	printf("jueves\n");
	printf("viernes\n");
	printf("sabado\n");
	printf("domingo\n");
	printf("\n");
	do{
	
	printf("ingrese un numero del 1 al 7:\n");
	scanf("%d",&i);

	switch(i){
		case 1:
			printf("el dia lune\n");
			break;
			
			case 2:
				printf("el dia martes\n");
				break;
				
				case 3:
					printf("el dia miercoles\n");
					break;
					
					case 4:
						printf("el dia jueves\n");
						break;
						
						case 5:
							printf("el dia viernes\n");
							break;
							
							case 6:
								printf("el dia sabado\n");
								break;
								
								case 7:
									printf("el dia domingo\n");
									break;
									
									default:
										printf("opcion invalida\n");
										printf("\n");
										printf("por fabor intente nuevamente\n");
										printf("\n");
										break;
	}
	}while(i<1 || i>7);
}
