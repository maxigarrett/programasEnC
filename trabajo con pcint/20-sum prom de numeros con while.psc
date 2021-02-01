Algoritmo ejersicio20
	Definir num,prom,sum Como Real
	definir cont como entero
	sum<-0
	cont<-0
	escribir"digite un numero"
	leer num
	
	Mientras num<>0 Hacer
		cont<-cont+1
		sum<-cont+num
		escribir"digite un numero"
		leer num
	Fin Mientras
	prom<-sum/cont
	escribir"la suma es ",sum
	escribir"el promedio es",prom
FinAlgoritmo
