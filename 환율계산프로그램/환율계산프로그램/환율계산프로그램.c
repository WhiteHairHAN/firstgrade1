#include<stdio.h>

int main(void)

{
	float rate;
	float usd;
	int krw;

	printf("달러에 대한 원화 환율을 입력하시오 : ");
	scanf("%f", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d 원은 %f 달러 입니다. \n", krw , usd);

	return 0;

}