#include <stdio.h>

int main(void)
{
	double w;
	double h;
	float area;
	float perimeter;
	int area;
	int perimeter;

	printf("���� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &w);

	printf("���� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &h);

	area = w*h;
	perimeter = 2 * (w + h);
    
	printf("�簢���� �ѷ� ���̴� %lf\n", perimeter);
	printf("�簢���� ���̴� %lf\n", area);
	return 0;
}