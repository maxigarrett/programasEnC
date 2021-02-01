Algoritmo while
	definir num Como Real
	definir cont,cont2,cont3,cont4 como entero
	cont2<-0
	cont3<-0
	cont4<-0
	cont<-0
	
	Mientras num<>9999 Hacer
		cont<-cont+1
		si num=0 Entonces
			cont2<-cont2+1
			
		SiNo
			si num>=1 Entonces
				cont3<-cont3+1
			SiNo
				si num<0 Entonces
					cont4<-cont4+1
					
					
				FinSi
			FinSi
		FinSi
		Escribir "digite los numeros para saber cuantos son negativos y cuantos positivos e iguales a 0"
		leer num
	FinMientras
	Escribir "los numeros digitados en cero son: ",cont2
	Escribir "los numeros positivos son:",cont3
	Escribir"los numeros negativos son: ",cont4
FinAlgoritmo
	