#include<stdio.h>
int main(void)
{
	int x, y, sum;
	printf("���ϴ� ���� 5���� �Է��Ͻÿ�.\n");
	x = 1;
	sum = 0;
	
	while (x<=5)
	{
		printf("%d��° ���� �Է��Ͻÿ� :",x); //  ����� �ٸ��� �ణ â�������� �������Ѽ� ����
		scanf("%d", &y);
		sum = sum + y;
		x = x + 1;
	}
	printf("�հ�� %d �Դϴ�.\n", sum);
	return 0;
}