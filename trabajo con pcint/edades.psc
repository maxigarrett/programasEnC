Algoritmo edadesdelaspersonas
	definir edad Como Entero
	escribir"ingrese la edad de  la persona"
	leer edad
	si edad >=65 entonces
		escribir"pertenece a la tercera edad"
	SiNo
		si edad >=18 Entonces
			escribir"mayor de edad"
		SiNo
			si edad <=3 Entonces
				escribir"es un bebe"
			SiNo
				escribir"es menor de edad"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
