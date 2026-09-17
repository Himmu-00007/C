#include <stdio.h>
int main ()
{
	float p,t,r,si;
	
	printf("Enter principal and time\n");
	scanf("%f%f",&p,&t);
	
	{
	if (t>=10)
	r=10;
	}
	{
	if (t<10 && t>=5)
	r=12;
	}
	{
	if (t<5)
	r=14;
    }
	
	si=p*t*r*0.01;
    printf ("\nSimple interest is %f", si);

 return 0;	
}