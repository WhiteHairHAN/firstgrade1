#include<stdio.h>
int main(void)
{
	int x, y, result;
	printf("2���� x������ ¦�� ������ ���� ���մϴ�.\n");
	printf("x�� �Է��ϼ��� :");
	scanf("%d", &x);

	y = 0;
	result = 0;
	while (y <= x)
	{
		result = result + y;
		y = y + 2;
	}

	printf("2���� %d������ ¦�� ������ ���� %d �Դϴ�.\n", x, result);
	return 0;
}