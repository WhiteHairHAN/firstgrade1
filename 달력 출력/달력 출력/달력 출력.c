#include<stdio.h>

#define startday 3
#define month_of_day 31

int main()
{
	int day, date; // day는 요일, date 날짜
	printf("====================\n");
	printf("일 월 화 수 목 금 토\n");
	printf("====================\n");

	for (day = 0; day < startday; day++)
	{
		printf("   ");
	}
	for (date = 1; date <= month_of_day; date++)
	{
		if (day == 7)
		{
			day = 0;
			printf("\n");
		}
		else
			day = day + 1;
		printf("%d  ", date);
	}

	printf("\n====================\n");
	return 0;
}