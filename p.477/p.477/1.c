#include<stdio.h>

int main(void)
{
	char *p1 = "hello world";
	char p2[] = "hello world";

	printf("p1 = %p \n", p1);
	printf("p1 = %s \n", p1);
	printf("\hello world \" 주소 = %p \n\n", "helloworld");

	p1 = "goodbye";
	printf("p1을 \"goodbye\" 를 가리키도록 변경\n");
	printf("p1 = %p \n", p1);
	printf("p1 = %s \n", p1);
	printf("\goodbye \" 주소 = %p \n\n", "goodbye");

	strcpy(p2, "goodbye");
	printf("p2 = %p \n", p2);
	printf("p2 = %p \n", p2);

	return 0;
}