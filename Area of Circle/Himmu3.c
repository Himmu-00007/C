#include <stdio.h>
int main ()
{
	float r,a;
	printf ("Enter the radius of circle: ");
	scanf  ("%f",&r);
	
	a=3.1415*r*r;
	
	printf ("\nThe area of circle is %f",a);
	return 0;
}
