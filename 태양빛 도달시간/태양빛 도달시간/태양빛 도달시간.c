#include <stdio.h>

int main(void)

{
	double lightspeed = 300000;
	double distance = 149600000;
	double time = distance/lightspeed;

	printf("���Ǽӵ��� %f km/s �Դϴ�.\n", lightspeed);
	printf("�¾�� �������� �Ÿ��� %f km �Դϴ�.\n", distance);
	printf("���޽ð��� %f �� �Դϴ�.\n", time);

	
	return 0;
}