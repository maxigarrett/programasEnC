Algoritmo notas
	definir nota Como Real
	Definir nombre,maxnombre Como Caracter
	max<-0
	maxnombre<-"" //las comillas para que cuando ingrese directamente 0 imprima el numero 0 y no tire error 
	escribir"ingrese la nota del alumno"
	Leer  nota
	Escribir "nombre del alumno"
	leer nombre
	Mientras nota<>0 Hacer
		si nota>max Entonces
			max<-nota
			maxnombre<-nombre
			
		FinSi
		Escribir "ingrese la nota del alumno"
		Leer nota
		Escribir "nombre del alumno"
		Leer nombre
	FinMientras
	Escribir "la nota maxima de:",maxnombre
	Escribir "es: ",max
FinAlgoritmo

