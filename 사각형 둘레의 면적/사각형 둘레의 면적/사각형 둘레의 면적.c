#include <stdio.h>

int main(void)
{
	double w;
	double h;
	float area;
	float perimeter;
	int area;
	int perimeter;

	printf("가로 길이를 입력하시오 : ");
	scanf("%d", &w);

	printf("세로 길이를 입력하시오 : ");
	scanf("%d", &h);

	area = w*h;
	perimeter = 2 * (w + h);
    
	printf("사각형의 둘레 길이는 %lf\n", perimeter);
	printf("사각형의 넓이는 %lf\n", area);
	return 0;
}