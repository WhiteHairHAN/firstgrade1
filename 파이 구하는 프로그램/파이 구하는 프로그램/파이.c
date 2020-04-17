#include<stdio.h>
int main(void)
{
	int x;
	double a, b, c;

	a = 1.0;
	b = 4.0;
	c = 0.0;
	printf("¹Ýº¹È½¼ö :");
	scanf("%d", &x);

	while (x > 0)
	{
		c = c + b / a;
		b = -1.0*b;
		a = a + 2;
		x--;
	}
	printf("Pi = %f\n", c);

}