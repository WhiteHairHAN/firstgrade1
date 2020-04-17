#include<stdio.h>

int main(void)
{
	char str[50] = "I am feel falling to the apart";
	int i = 0;
	while (str[i] != 0)
		i++;
	printf("문자열 \"%s\" 의 길이는 %d 입니다.\n", str, i);
	return 0;
}