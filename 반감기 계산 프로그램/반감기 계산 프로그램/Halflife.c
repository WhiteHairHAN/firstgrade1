#include<stdio.h>
int main()
{
	int halflife;
	double initial;
	double lastresult;
	int year ;
	year = 0;
	printf("반감기를 입력하시오:");
	scanf("%d", &halflife);

	initial = 10.0;
	lastresult = initial;
	
	while (lastresult > initial/10000.0)
	{
		year += halflife;
		lastresult = lastresult / 2.0;
		printf("%d 년후에 남은 양 = %lf\n", year,lastresult);
	}
	printf("10분의 1이하로 되기까지 걸린시간 = %d년 \n", year);
	return 0; 
}