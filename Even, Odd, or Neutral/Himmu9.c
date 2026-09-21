#include <stdio.h>
int main ()
{
	int num1;
	
	printf("Enter any whole number: ");
	scanf("%d",&num1);
	
	
	if (num1==0)
	{
		printf ("\nNeither odd nor even");
	}
	    
		else if (num1%2==0)
	{
	    printf ("\nEven number");
	}
	    
		else
	{  
	    printf ("\nOdd number");
    }
	
 return 0;	
}
