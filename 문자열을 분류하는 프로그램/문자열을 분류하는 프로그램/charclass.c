#include <stdio.h>
int main(void)
{
	char ch;

	printf("���ڿ��� �Է��Ͻÿ� :");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z') 
		printf("%c �� �빮���Դϴ�.\n", ch);
	
	else if (ch >= 'a' && ch <= 'z')
		printf("%c �� �ҹ����Դϴ�.\n", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c�� �����Դϴ�.\n", ch);
	else
		printf("%c�� ��Ÿ���� �Դϴ�");

	return 0;


}