#include<stdio.h>

int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value);
	printf("%d\n", value);
	sprintf(s2, "%d\n", value);
	printf("%s\n", s2);
	return 0;
}