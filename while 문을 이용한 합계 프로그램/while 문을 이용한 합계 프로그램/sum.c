#include<stdio.h>
int main(void)
{
	int x, y, sum;
	printf("원하는 정수 5개를 입력하시오.\n");
	x = 1;
	sum = 0;
	
	while (x<=5)
	{
		printf("%d번째 값을 입력하시오 :",x); //  교재랑 다르게 약간 창의적으로 변형시켜서 만듬
		scanf("%d", &y);
		sum = sum + y;
		x = x + 1;
	}
	printf("합계는 %d 입니다.\n", sum);
	return 0;
}