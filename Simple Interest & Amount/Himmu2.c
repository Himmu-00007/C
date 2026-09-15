#include<stdio.h> 
int main ()
{
	float P,T,R,SI,A;
	
	printf("Enter principal, time, rate\n");
	scanf("%f%f%f",&P,&T,&R);
	
	SI=(P*T*R)/100;	
	
	printf("\nThe simple interest of the given data is %f",SI);
	
	A=P+SI;
	
	printf("\nAnd amount is %f",A);
	return 0;
}
