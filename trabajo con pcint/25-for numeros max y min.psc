Algoritmo sin_titulo
	definir num,max,min Como Real
	max<--999999
	min<-999999
	definir contador Como Entero
	para contador<-1 hasta 5 Hacer
		leer num
		si num>max Entonces
			
		FinSi
		si num<min Entonces
			min<-num
		FinSi
	FinPara
	escribir "el maximo num es:",max
	escribir "el minimo es:",min
FinAlgoritmo
