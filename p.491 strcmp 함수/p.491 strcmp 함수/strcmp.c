#include<stdio.h>
#include<string.h>

int main(void)
{
	char s1[80];
	char s2[80];
	int result; 

	printf("첫번째 단어를 입력하시오 :");
	scanf("%s", s1);
	printf("두번째 단어를 입력하시오 :");
	scanf("%s", s2);

	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s 가 %s 보다 앞에 있습니다.\n", s1, s2);
	else if (result == 0)
		printf("%s 가 %S 와 같습니다.\n", s1, s2);
	else
		printf("%s 가 %s 보다 뒤에 있습니다.\n", s1, s2);
	return 0;
}