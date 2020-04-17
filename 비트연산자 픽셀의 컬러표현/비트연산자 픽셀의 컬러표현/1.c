#include <stdio.h>
int main(void)
{
	unsigned int color = 0x00380000;
	unsigned int result;

	printf("픽셀의 색상 : %#08x\n", color);
	result = color & 0x00ff0000;
	result = result >> 16;
	printf("추출된 빨강색 %#08x\n , result");
	return 0;
}