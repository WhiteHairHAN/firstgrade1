#include<stdio.h>
int main(void)
{
	double initial,total,leeduk;
	int year,x;

	printf("���� :");
	scanf("%lf", &initial);
	printf("���� :");
	scanf("%lf", &leeduk);
	printf("�Ⱓ :");
	scanf("%d", &year);

	printf("=====================\n");
	printf("����          ������\n");
	printf("=====================\n");
	total = initial;
	leeduk = leeduk / 100.0;

	for (x = 0; x < year; x++)
	{
		total = total * (1 + leeduk);
		printf("%2d      %.30lf\n", x+1, total); // %.x ~~ �� �Ҽ��� x�ڸ����� ����϶�� ��
	}
	return 0;
}