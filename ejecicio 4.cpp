#include <iostream>
#include <stdio.h>
void valor();
int main()
{
	valor();
}
void valor()
{
	int v;
	printf ("digite tu edad");
	scanf ("%d", &v);
	
	
	
	if(v>=0){
		
		for( int i=0;i<=v;i++)
			printf("%d",i);
		
	}else
	   printf ("error no se puede numeros negativos");
	
	
	return 0;
}


