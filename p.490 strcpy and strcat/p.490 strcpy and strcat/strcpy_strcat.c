#include<string.h>
#include<stdio.h>

int main(void)
{
	char string[80];

	strcpy  (string, "HELLO WORlD from");
	strcat(string, "strcpy");
	strcat(string, "and");
	strcat(string, "strcat!");
	printf("string =%s\n", string);

	return 0;
}