#include<stdio.h>
int main(void)
{
	int x, y, r;

	printf("�� ������ �Է��Ͻÿ�. EX) (ū��, ������)\n");
	printf("=>> ");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{
		r = x%y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d �Դϴ�.\n", x);

	return 0;
}