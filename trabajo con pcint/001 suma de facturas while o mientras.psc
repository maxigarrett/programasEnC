Algoritmo facturas
	definir fac,cont Como Entero
	definir sum como entero
	sum<-0
	Mientras fac<>9999 Hacer
		cont=cont+1
		sum<-sum+fac
		Escribir "ingrese el num de cantidad de facturas"
		leer fac
	FinMientras
	escribir "la suma es: ",sum
FinAlgoritmo
