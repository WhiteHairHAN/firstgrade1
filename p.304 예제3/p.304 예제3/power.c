#include<stdio.h>
int get_integer(void);
int power(int x, int y);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("%d 의 %d 승은 %d 입니다. \n", a, b, power(a, b));
	return 0;
}

int get_integer(void)
{
	int n;
	printf("정수를 입력하시오.\n");
	scanf("%d", &n);
	return n;
}

int power(int x, int y)
{
	int i;
	long result = 1;
	for (i = 0; i < y; i++)
		result *= x;
	return result;
}