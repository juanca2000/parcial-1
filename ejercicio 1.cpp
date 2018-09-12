#include <stdio.h>
#include <conio.h>


int main() {
	int r,b,p;
    printf("cuantas preguntas realizon");
	scanf("%d",&r);
	printf("cuantas buenas");
	scanf("%d",&b);
	
	p=(b*100)/r;
	
	if (p>=90)
	{
	  printf("nivel maximo");
	}if (p>=75 && p<90)
	 {
		printf("nivel medio"); 
	 }if (p>=50 && p<75)
	 {
		printf("nivel regular"); 
	 }if (p<50)
	 {
		 printf("fuera de nivel");
	 }
	
	return 0;
}

