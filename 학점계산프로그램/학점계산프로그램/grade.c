#include<stdio.h>
int main(void)
{
	int score;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &score);

	if (score > 100)
		printf("������ �ٽ��Է��� �ּ���.\n");
	else if (score >= 90)
		printf("������ A �Դϴ�.\n");
	else if (score >= 80)
		printf("������ B �Դϴ�.\n");
	else if (score >= 70)
		printf("������ C �Դϴ�.\n");
	else if (score >= 60)
		printf("������ D �Դϴ�.\n");
	else
		printf("������ F �Դϴ�.\n");
	return 0;
}