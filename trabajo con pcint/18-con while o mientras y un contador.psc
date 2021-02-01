Algoritmo numeros_ejercicio
	definir nota como entero
	definir nombre Como Caracter
	definir cont como entero
	escribir "ingrese un nota"
	leer nota
	escribir "ingrese el nombre del alumno"
	leer nombre
	cont<-0
	
	
	mientras nota<>0 hacer
		cont<-cont+1
		si nota>=7 entonces
			escribir"la nota de ",nombre,"es:",nota
		FinSi
		escribir "ingrese el nombre del alumno"
		leer nombre
		escribir "ingrese una nota"
		leer nota
	FinMientras
	escribir"la cantidad de alumnos es:",cont
	
	
	
FinAlgoritmo