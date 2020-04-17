#include<stdio.h>
#define STUDENTS 10

int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, ave;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오.");
		scanf("%d", &grade[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum = sum + grade[i];
	}

	ave = sum / STUDENTS;
	printf("학생들의 평균석적은 %d", ave);
	return 0;
}