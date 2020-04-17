#include<stdio.h>
#include<limits.h>
int main(void)
{
	int number, min_value = INT_MAX;

	printf("정수를 입력하시오.\n종료하려면 Clrl + Z을 누르세요.\n");

	while (scanf("%d", &number) != EOF)
	{
		if (number < min_value)
			min_value = number;
	}
	printf("최소값은 %d 입니다.\n", min_value);
	return 0;
}