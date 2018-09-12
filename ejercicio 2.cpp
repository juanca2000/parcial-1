#include <iostream>
#include <stdio.h>

int main() {
	int numero[15],v,c;
	printf ("ingrese 15 numeros");
	
	for(int i=0; i<15;i++){
		scanf("%d", &numero[i]);
	
	if(numero[i]%2==0)
	{
		v=v++;
	}else
		c=c++;
	}
	printf("cantidad de pares: %d",v);
	return 0;
}

