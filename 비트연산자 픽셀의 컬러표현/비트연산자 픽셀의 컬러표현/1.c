#include <stdio.h>
int main(void)
{
	unsigned int color = 0x00380000;
	unsigned int result;

	printf("�ȼ��� ���� : %#08x\n", color);
	result = color & 0x00ff0000;
	result = result >> 16;
	printf("����� ������ %#08x\n , result");
	return 0;
}