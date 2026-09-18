#include<stdio.h>
int main ()
{
    int a,b,sum,diff,prod,avg;
	
	printf("Enter any 2 numbers");
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	diff=a-b;
	prod=a*b;
	avg=sum/2;
	
	printf("\nThe sum of the entered numbers is %d",sum);
	printf("\nThe difference of the entered numbers is %d",diff);
	printf("\nThe product of the entered numbers is %d",prod);
	printf("\nThe average of the entered numbers is %d",avg);

	return 0;
}
