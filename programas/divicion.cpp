# include <stdio.h>

int main() {
	
	int a,b;
	float c;
	
	printf("ingrese un valor a");
	scanf("%d", &a);
	
	printf("ingrese valor b");
	scanf("%d", &b);

	if(b==0){
	printf("el valor no puede ser igual a 0");
	}
	
	else{
	     c=a/b;
	
	printf("el resultado es: %f",c);
}
	return 0;
	}
	
	
	
	

