#include <stdio.h>
int main ()
{
	float a,b,c;
	
	printf("Enter any three numbers\n");
	scanf("%f%f%f",&a,&b,&c);
	
	
	if (a>b && a<c || a<b && a>c)
	{
	
      printf ("\nMiddle no. is %f", a);
	}
	
	else if (b>a && b<c || b<a && b>c)
	{
	  printf ("\nMiddle no. is %f", b);
	}
	
	else
	{  
	  printf ("\nMiddle no. is %f", c);
    }
	
 return 0;	
}