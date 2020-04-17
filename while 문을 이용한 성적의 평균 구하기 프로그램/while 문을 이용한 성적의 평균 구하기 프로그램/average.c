#include<stdio.h>
int main(void)
{
	int grade = 0, n = 1; // n번째 과목의 성적을 입력하라는 출력문을 띄우기위해
	float sum = 0, average;  // n=0 으로 하지않고 n=1로 선언

	printf("계산기를 종료하려면 100초과 값을 입력하거나, 음수값을 입력하시오.\n");
	while (grade >= 0 && grade <= 100)
	{
		printf("%d번째 과목의 성적을 입력하시오 :", n);
		scanf("%d", &grade);
		sum = sum + grade;
		n = n + 1;
	}
	sum = sum - grade;
	n = n - 2; // 음 뭐라 설명해야되는지 모르겠지만, 마지막 센티넬값과 처음값의 n을 빼주면 실제 평균을
	//구하려는 과목 개수를 알수 있음

	average = sum / n;
	printf("%d 개의 과목의 평균은 %f 입니다.\n", n, average);
	return;
}

