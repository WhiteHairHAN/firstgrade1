#include<stdio.h>
static void f1()
{
	printf("ds1ds\n");
}
void f2()
{
	f1();
	printf("dsds\n");
}