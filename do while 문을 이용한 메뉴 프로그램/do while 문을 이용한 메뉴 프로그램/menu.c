#include<stdio.h>
int main(void)
{
	int i = 0;
	do
	{
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("������ �޴� = %d \n", i);
	return 0;
}