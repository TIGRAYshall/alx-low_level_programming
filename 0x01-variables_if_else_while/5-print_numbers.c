#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'a')
{
continue;
}
putchar (a);
putchar (0);
}
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					return (0);
}
