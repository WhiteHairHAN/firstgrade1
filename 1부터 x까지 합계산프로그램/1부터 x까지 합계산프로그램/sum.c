#include<stdio.h>
int main(void)
{
	int x,y, result;
	printf("1���� X������ ���� ����Ϸ��� X���� �Է��ϼ���.\n");
	scanf("%d", &x);
	y = 1;
	result = 0;
	while (y <= x)
	{
		result += y;
		y++;
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n",x, result);
	return 0;
}