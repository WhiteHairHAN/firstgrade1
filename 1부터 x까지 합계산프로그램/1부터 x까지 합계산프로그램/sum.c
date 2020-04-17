#include<stdio.h>
int main(void)
{
	int x,y, result;
	printf("1부터 X까지의 합을 계산하려면 X값을 입력하세요.\n");
	scanf("%d", &x);
	y = 1;
	result = 0;
	while (y <= x)
	{
		result += y;
		y++;
	}
	printf("1부터 %d까지의 합은 %d 입니다.\n",x, result);
	return 0;
}