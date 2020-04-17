#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char *p;
	int loc;

	p = strstr(s, sub);
	loc = (int)(p - s);
	if (p != NULL)
		printf("첫번째 %s 가 %d 에서 발견되었음 \n", sub, loc);
	else
		printf("%s 가 발견되지 않았음\n", sub);
}