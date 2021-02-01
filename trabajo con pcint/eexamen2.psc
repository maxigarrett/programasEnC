Algoritmo sin_titulo
	definir prom como real
	definir a,num,sum,cont como entero
	
	para a<-1 hasta 10 hacer
		escribir "ingrese la venta mensual"
		leer num
		sum<-sum+num
		si num<1000 entonces
			
			cont<-cont+1
			
			
			
		FinSi
		
	FinPara
	prom<-sum/10
	escribir "el promedio es: ",prom
	escribir "las ventas mensuales menore a 1000 son:",cont
FinAlgoritmo
