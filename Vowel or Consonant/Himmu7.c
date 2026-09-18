#include <stdio.h>
int main ()
{
	char c;
	
	printf ("Enter any character\n");
	scanf ("%c",&c);
	
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='I' || c=='O' || c=='U')
	{
		printf ("%c is the vowel character",c);
	}
	else
	{
		printf ("%c is the consonant character",c);
	
	}
	return 0;
}
