#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;
	
	printf("초를 입력하시오 :");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d 초는 %d 분 %d 초 입니다. \n", input, minute, second);
	return 0;
}