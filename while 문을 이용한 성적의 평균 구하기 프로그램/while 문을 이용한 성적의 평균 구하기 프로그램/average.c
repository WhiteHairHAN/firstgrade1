#include<stdio.h>
int main(void)
{
	int grade = 0, n = 1; // n��° ������ ������ �Է��϶�� ��¹��� ��������
	float sum = 0, average;  // n=0 ���� �����ʰ� n=1�� ����

	printf("���⸦ �����Ϸ��� 100�ʰ� ���� �Է��ϰų�, �������� �Է��Ͻÿ�.\n");
	while (grade >= 0 && grade <= 100)
	{
		printf("%d��° ������ ������ �Է��Ͻÿ� :", n);
		scanf("%d", &grade);
		sum = sum + grade;
		n = n + 1;
	}
	sum = sum - grade;
	n = n - 2; // �� ���� �����ؾߵǴ��� �𸣰�����, ������ ��Ƽ�ڰ��� ó������ n�� ���ָ� ���� �����
	//���Ϸ��� ���� ������ �˼� ����

	average = sum / n;
	printf("%d ���� ������ ����� %f �Դϴ�.\n", n, average);
	return;
}

