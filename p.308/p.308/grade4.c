#include<stdio.h>
#define STUDENTS 10

int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, ave;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�.");
		scanf("%d", &grade[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum = sum + grade[i];
	}

	ave = sum / STUDENTS;
	printf("�л����� ��ռ����� %d", ave);
	return 0;
}