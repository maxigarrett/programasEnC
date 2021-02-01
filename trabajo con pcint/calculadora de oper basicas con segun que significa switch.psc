Algoritmo calculadoara
	definir num1,num2,resultado como real
	definir operador Como Entero
	escribir "ingrese el primer numero"
	leer num1
	escribir"ingrese el segundo numero"
	leer num2
	escribir"ingrese el numero del operador"
	leer operador
	resultado=0
	segun operador 
		1: escribir"usted eligio la operacion suma de los numero que ingreso"
			resultado<-num1+num2
			
		2: escribir"usted eligio la operacion de resta de los numeros que ya ingreso"
			resultado<-num1-num2
			
		3:escribir"usted eligio la operacion multiplicacion de los numero que ya eligio"
			resultado<-num1*num2
			
		4: escribir"usted eligio la operacion dividir"
			resultado<-num1/num2
			
			de otro modo
			escribir"el operador es invalido",resultado
	FinSegun
	escribir"el resultado es: ",resultado
FinAlgoritmo
