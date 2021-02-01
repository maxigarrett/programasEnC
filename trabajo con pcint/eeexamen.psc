Algoritmo sin_titulo
	definir nom,maxnombre como caracter
	definir cantgol Como Entero
	max<-0
	maxnombre<-""
	escribir "diga el nombre del jugador"
	leer nom
	escribir "ponga la cantidad de goles del jugador"
	leer cantgol
	
	Mientras cantgol<>0 Hacer
		si cantgol> max Entonces
			max<-cantgol
			maxnombre<-nom
			
			
		FinSi
		escribir "diga el nombre del jugador"
		leer nom
		escribir "ponga la cantidad de goles del jugador"
		leer cantgol
	FinMientras
	Escribir "la mayor cantidad de goles:",max
	Escribir "el jugador fue: ",maxnombre
FinAlgoritmo
