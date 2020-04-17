#include<stdio.h>
int main(void)
{
	int x, y, result;
	printf("2부터 x까지의 짝수 정수의 합을 구합니다.\n");
	printf("x를 입력하세요 :");
	scanf("%d", &x);

	y = 0;
	result = 0;
	while (y <= x)
	{
		result = result + y;
		y = y + 2;
	}

	printf("2부터 %d까지의 짝수 정수의 합은 %d 입니다.\n", x, result);
	return 0;
}