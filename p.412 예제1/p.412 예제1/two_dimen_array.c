#include<stdio.h>
#define classes 3
#define students 5

int main(void)
{
	int s[classes][students] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};
	int clas, student, total, subtotal;
	total = 0;
	for (clas = 0; clas < classes; clas++)
	{
		subtotal = 0;
		for (student = 0; student < students; student++)
			subtotal += s[clas][student];
		printf("�б�  %d �� ��ռ��� %d\n", clas, subtotal / students);
		total += subtotal;
	}
	printf("��ü �л����� ��� ���� = %d\n", total / (classes * students));
	return 0;
}