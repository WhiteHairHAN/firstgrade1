#include <stdio.h>

int main(void)

{
	double lightspeed = 300000;
	double distance = 149600000;
	double time = distance/lightspeed;

	printf("빛의속도는 %f km/s 입니다.\n", lightspeed);
	printf("태양과 지구와의 거리는 %f km 입니다.\n", distance);
	printf("도달시간은 %f 초 입니다.\n", time);

	
	return 0;
}