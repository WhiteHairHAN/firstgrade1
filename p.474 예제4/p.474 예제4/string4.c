#include<stdio.h>

int main(void)
{
	char str[50] = "I am feel falling to the apart";
	int i = 0;
	while (str[i] != 0)
		i++;
	printf("���ڿ� \"%s\" �� ���̴� %d �Դϴ�.\n", str, i);
	return 0;
}