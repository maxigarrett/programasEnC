
/*3-	Se Solicita al Usuario que ingrese 10 números de DNI sin puntos, por cada DNI se solicita un sueldo x horas, horas trabajadas, 
año de antigüedad. Una vez ingresado los solicitado se mostrar una lista que diga:
El Empleado con DNI -------------------, cobra un sueldo por hora de --------------, trabajo ------------- horas, su plus por los -------años de 
antigüedad es ------------ y su sueldo a cobrar es de $--------------.
La antigüedad se calcula de 0 a 5 años 10%, 6 a 10 años 15%, 11 a 15 años 20%, más de 15 años 25%.*/

#include<stdio.h>
#include<conio.h>
int main(){
	float matriz[7][10];// Declaro una matriz entera de 7 filas y 10 columnas 	

	
	
	
	
	for(int c=0; c<10; c++)  // el For c va a recorrer las columnas aumentando de a 1 
	{
	  	for(int f=0; f<7; f++) // el for f va a recorrer todas las filas aumentando en 1 
		{
	        matriz[f][c]=0;  // designo mi matriz en 0 por valores residuos que contenga 
	        
		}
	}
	  
	  
		for(int c=0; c<10; c++)  // inicio la carga de datos , voy a recorrer las 10  columnas 
	{	 
	                             
            printf("Digite dni : ");
			scanf("%g",&matriz[0][c]);      //cargo los dni en la fila 0 y recorre 10 columnas 
	                                  
            printf("Digite valor de la hora : ");
			scanf("%g",&matriz[1][c]);      //cargo el valor de la hora en la fila 1 y recorre 10 columnas
	                                      
           	printf("Digite Horas trabajadas : ");
			scanf("%g",&matriz[2][c]);      //cargo el valor de las horas trabajadas en la fila 2 y recorre 10 columnas
                                    
           	printf("Digite antiguedad : ");
			scanf("%g",&matriz[3][c]);      //cargo la antiguedad en fila 3 y recorre 10 columnas con el for 
		
	}

	for(int c=0; c<10; c++)
	{
		matriz[4][c]=matriz[1][c]*matriz[2][c];
}

	for(int c=0; c<10; c++)
	{if(matriz[3][c]<=5){
		matriz[5][c]=matriz[4][c]*0.10;
	}else{
	
	if(matriz[3][c]>5 && matriz[3][c]<=10){
		matriz[5][c]=matriz[4][c]*0.15;
	}else{
		if(matriz[3][c]>10 && matriz[3][c]<=15){
			matriz[5][c]=matriz[4][c]*0.20;
		}else{
			if(matriz[3][c]>15){
				matriz[5][c]=matriz[4][c]*0.25;
			}
		}
	}
	}
}





for(int c=0; c<10; c++)
	{

matriz[6][c]=matriz[4][c]+matriz[5][c];


}

for(int c=0; c<10; c++)

	{
	  
		printf("El empleado con DNI %g ,",matriz[0][c]);             //Imprimo todos los datos !
    	printf("cobra un sueldo por hora de %g $,",matriz[1][c]);
    	printf("trabajo %g horas ,",matriz[2][c]);
    	printf("su plus por %g años de antiguedad ",matriz[3][c]);
    	printf("es de %g $",matriz[5][c]);
    	printf("y su sueldo a cobrar es de %g $.\n",matriz[6][c]);		
	    	
	}












for(int c=0; c<10; c++){
             	for(int f=0; f<7; f++){
             	   
             		 
             		 printf("%g  ",matriz[f][c]);
             	}
				 printf("\n");
             }
			
					    
				 }
