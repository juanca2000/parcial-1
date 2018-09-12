#include <iostream>
#include <stdio.h>
#include <conio.h>
void enteros();

int main() 
{
	enteros();

}
void enteros()
{
	float c=0;
	 int numero[6];
	   printf("digite 6 numeros");
	for(int i=0;i<6;i++){
		scanf("%d",&numero[i]);
		c=c+numero[i];
	}
	printf ("el promedio de los 6 numeros es: %.2f",c/6);
}

