#include <stdio.h>
#define TAX_RATE 0.2

int main(void)

{
	const int MONTHS = 12;
	int m_salary, y_salary;			//변수선언

	printf("월급을 입력하시오 :");		//입력 안내문
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d 입니다. \n", y_salary);
	printf("세금은 %f 입니다. \n", y_salary*TAX_RATE);

	return 0;
}
