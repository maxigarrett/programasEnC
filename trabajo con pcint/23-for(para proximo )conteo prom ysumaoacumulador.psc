Algoritmo for
	definir num,prom,suma Como Real
	definir a Como Entero
	sum<-0
	Para a<-1 Hasta 10  Hacer
		escribir "ingrese la nota del alumno"
		leer num
		sum<-sum+num
		si num>=5 entonces
			escribir"la nota es num",num		
		FinSi
		
		
	Fin Para
	prom<-sum/10
	escribir"promedio es de: ",prom
FinAlgoritmo
