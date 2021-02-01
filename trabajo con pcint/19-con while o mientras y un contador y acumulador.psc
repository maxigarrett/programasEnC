Algoritmo numeros_ejercicio
	definir nota,acum,prom como real
	definir nombre Como Caracter
	definir cont como entero
	cont<-0
	acum<-0
	escribir "ingrese un nota"
	Leer nota
	escribir "ingrese el nombre del alumno"
	leer nombre
	
	
	
	mientras nota<>0 hacer
		cont<-cont+1
		acum<-acum+nota
		si nota>=7 entonces
			escribir"la nota de ",nombre,"es:",nota
		FinSi
		escribir "ingrese el nombre del alumno"
		leer nombre
		escribir "ingrese una nota"
		leer nota
	FinMientras
	escribir"la cantidad de alumnos es :",cont
	escribir"la cumulacion de nota es :",acum
	prom<-acum/cont
	escribir"el promedio de las notas es: ",prom
	
FinAlgoritmo