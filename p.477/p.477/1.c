#include<stdio.h>

int main(void)
{
	char *p1 = "hello world";
	char p2[] = "hello world";

	printf("p1 = %p \n", p1);
	printf("p1 = %s \n", p1);
	printf("\hello world \" �ּ� = %p \n\n", "helloworld");

	p1 = "goodbye";
	printf("p1�� \"goodbye\" �� ����Ű���� ����\n");
	printf("p1 = %p \n", p1);
	printf("p1 = %s \n", p1);
	printf("\goodbye \" �ּ� = %p \n\n", "goodbye");

	strcpy(p2, "goodbye");
	printf("p2 = %p \n", p2);
	printf("p2 = %p \n", p2);

	return 0;
}