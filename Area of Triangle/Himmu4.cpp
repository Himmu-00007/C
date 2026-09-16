#include <stdio.h>
int main ()
{
	float b,h,a;
	printf ("Enter the base and height of triangle: ");
	scanf  ("%f%f",&b,&h);
	
	a=0.5*b*h;
	
	printf ("\nThe area of triangle is %f",a);
	return 0;
}
	