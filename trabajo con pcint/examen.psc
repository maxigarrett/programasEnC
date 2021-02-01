Algoritmo frigorifico_examen_de_logica
	definir monto,kilos Como entero
	escribir"ingrese los kilos"
	leer kilos
	si kilos>=5 entonces
		monto<-kilos*190
		escribir"valor de quilos es:",monto
		
	SiNo
		si kilos>=3 Entonces
			monto<-kilos*220
			escribir"el valor de quilos es:",monto
			
		SiNo
			si kilos<=2 entonces
				monto<-kilos*250
				escribir"el valor de quilos es:",monto
				
			FinSi
		FinSi
	
	FinSi
	
	
	
FinAlgoritmo
