#include<stdio.h>
int main(void)
{
	int n;
	printf("===============\n");
	printf("  n     nÀÇÁ¦°ö  \n");
	printf("===============\n");

	n = 1;
	while (n <= 10)
	{
		printf("  %d         %d  \n", n, n*n);
		n++;
	}
	return 0;
}