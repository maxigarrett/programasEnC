# include <stdio.h>
# include <stdlib.h>
# include <iostream>
 main(){
	
	int a,b;
	
	printf("igrese un valor para a");
	scanf("%d",&a);
	
	printf("ingrese un valor para b");
	scanf("%d",&b);
	
	if(b==0){
		printf("no se puede dividir por 0");
	}
	else{
		printf("la divicion, %d", a/b);
	}
}



