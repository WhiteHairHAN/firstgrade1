#include<stdio.h>
int main(void)
{
	int x;
	int y = 1;
	printf("출력하고 싶은 단 :");
	scanf("%d", &x);

	while (y <= 9)
	{
		printf("%d * %d = %d \n", x, y, x*y);
		y++;
	}
	return 0;
}