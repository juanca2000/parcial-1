#include <iostream>
#include <stdio.h>
#include <string.h>
	

int main() {
	int ju,da;
	char nu1[100];
	char nu2[100];
	
	printf("\ndigite un nombre\n");
	gets (nu1);
	printf("\ndigite otro nombre\n");
	gets (nu2);
	ju=strlen(nu1);
	da=strlen(nu2);
	
	if (ju>da)
	{
		printf ("%s",nu1);
		printf ("%s",nu2);
	}else
		printf("%s",nu2);
	    printf("%s",nu1);
	
	return 0;
}

