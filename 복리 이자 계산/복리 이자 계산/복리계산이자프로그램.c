#include<stdio.h>
int main(void)
{
	double initial,total,leeduk;
	int year,x;

	printf("원금 :");
	scanf("%lf", &initial);
	printf("이율 :");
	scanf("%lf", &leeduk);
	printf("기간 :");
	scanf("%d", &year);

	printf("=====================\n");
	printf("연도          원리금\n");
	printf("=====================\n");
	total = initial;
	leeduk = leeduk / 100.0;

	for (x = 0; x < year; x++)
	{
		total = total * (1 + leeduk);
		printf("%2d      %.30lf\n", x+1, total); // %.x ~~ 는 소수점 x자리까지 출력하라는 뜻
	}
	return 0;
}