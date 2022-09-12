#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- print if the number is possitive, zero or negative 
 *
 * Description: using the main function 
 * this programming prints "Programming is positive, zero or negative"
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n>0)
	{
		printf("%i is positive\n", n);
	}
	else if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n<0)
	{
		printf("%i is negative\n", n);
	}
	return(0);
}
