#include<stdio.h>
int main(void)
{
	int score;

	printf("성적을 입력하세요 :");
	scanf("%d", &score);

	if (score > 100)
		printf("학점을 다시입력해 주세요.\n");
	else if (score >= 90)
		printf("학점은 A 입니다.\n");
	else if (score >= 80)
		printf("학점은 B 입니다.\n");
	else if (score >= 70)
		printf("학점은 C 입니다.\n");
	else if (score >= 60)
		printf("학점은 D 입니다.\n");
	else
		printf("학점은 F 입니다.\n");
	return 0;
}