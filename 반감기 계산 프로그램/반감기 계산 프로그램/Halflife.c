#include<stdio.h>
int main()
{
	int halflife;
	double initial;
	double lastresult;
	int year ;
	year = 0;
	printf("�ݰ��⸦ �Է��Ͻÿ�:");
	scanf("%d", &halflife);

	initial = 10.0;
	lastresult = initial;
	
	while (lastresult > initial/10000.0)
	{
		year += halflife;
		lastresult = lastresult / 2.0;
		printf("%d ���Ŀ� ���� �� = %lf\n", year,lastresult);
	}
	printf("10���� 1���Ϸ� �Ǳ���� �ɸ��ð� = %d�� \n", year);
	return 0; 
}