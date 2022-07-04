#include <stdio.h>
/**
 * main - Testing nested for loops
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i < 10; i++) 
	{
		printf("%d, ", i);
		/*for (k = i; k >= 0; k--)
		{
			printf("%d", k);
		}
	printf("\n");*/
	}
	putchar('\n');
	return (0);
}
