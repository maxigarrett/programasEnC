/*3-	Se Solicita al Usuario que ingrese 10 números de DNI sin puntos, por cada DNI se solicita un sueldo x horas, horas trabajadas, 
año de antigüedad. Una vez ingresado los solicitado se mostrar una lista que diga:
El Empleado con DNI -------------------, cobra un sueldo por hora de --------------, trabajo ------------- horas, su plus por los -------años de 
antigüedad es ------------ y su sueldo a cobrar es de $--------------.
La antigüedad se calcula de 0 a 5 años 10%, 6 a 10 años 15%, 11 a 15 años 20%, más de 15 años 25%.*/

#include<stdio.h>


int main(){
	int dni[10];
	int horas[10];
	int valor[10];
	int antiguedad[10];
	int x , y , z , t ;
	float auxant[10], totalsueldo [10], sueldo[10];
	  
	  for (t=0 ; t<10 ; t++){
	dni[t]=0;
	horas[t]=0;
	valor[t]=0;
	antiguedad[t]=0;
	auxant[t] =0;	
	totalsueldo [t]	=0;
	sueldo[t]=0;
	}
	
	
	for(y=0 ;y<10 ;y++){
		printf("%i .Digite DNI : ",y+1);
		scanf("%d",&dni[y]);
	    printf("%i .Digite las horas trabajadas : ",y+1);
		scanf("%d",&horas[y]);
		printf("%i .Digite el valor por hora del empleado : ",y+1);
		scanf("%d",&valor[y]);
		printf("%i . Digite antiguedad del empleado : ",y+1);
		scanf("%d",&antiguedad[y]);
		}
		
		for(x=0 ; x<10 ;x++){	
			if(antiguedad[x]<=5){
				
				sueldo[x] = valor[x] * horas[x];
				auxant[x] = (sueldo[x] *10)/100;
				totalsueldo[x] = sueldo [x]+ auxant[x];
			}else{
				if(antiguedad[x]>5 && antiguedad[x]<=10){
				    sueldo[x] = valor[x] * horas[x];
				    auxant[x] = (sueldo[x]*15)/100;
				    totalsueldo[x] = sueldo[x] + auxant[x];    
				}else{
					if(antiguedad[x]>10 && antiguedad[x]<=15){
						sueldo[x] = valor[x] * horas[x];
				        auxant[x] = (sueldo[x]*20)/100;
				        totalsueldo[x] = sueldo[x] + auxant[x];   
					}else{
						if(antiguedad[x]>15){
							sueldo[x] = valor[x] * horas[x];
				            auxant [x]= (sueldo[x] *25)/100;
				            totalsueldo[x] = sueldo[x] + auxant[x]; 
						}
					}
				}
			}
			    
		}
		
	for(z=0 ; z<10 ;z++){
		printf("El empleado con DNI %i ,",dni[z]);
    	printf("cobra un sueldo por hora de %i $,",valor[z]);
    	printf("trabajo %i horas ,",horas[z]);
    	printf("su plus por %i años de antiguedad ",antiguedad[z]);
    	printf("es de %g $",auxant[z]);
    	printf("y su sueldo a cobrar es de %g $.\n",totalsueldo[z]);
	}
	
	
	
	
}
