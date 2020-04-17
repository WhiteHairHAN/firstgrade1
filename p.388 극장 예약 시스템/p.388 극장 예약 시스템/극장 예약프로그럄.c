#include<stdio.h>
#define SIZE 10

int main(void)
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("좌석을 예약할래요?");
		scanf("%c", &ans1);

		if (ans1 == 'y')
		{
			printf("====================\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("====================\n");

			for (i = 0; i < SIZE; i++)
				printf(" %d", seats[i]);
			printf("\n");

			printf("몇번째 예약할래?");
			scanf("%d", &ans2);


			if (seats[ans2 - 1] == 0)
			{
				seats[ans2 - 1] = 1;
				printf("예약됨\n");
			}
			else
				printf("예약자리임\n");
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}