#include<stdio.h>
#include<string.h>
#define WORDS 5

int main(void)
{
	int i, index;
	char dic[WORDS][2][30] = {
		{"book" , "�ҳ�"},
		{ "boy" , "�ҳ�" },
		{ "computer" , "��ǻ��" },
		{ "lanuguage" , "���" },
		{ "rain" , "��"}
	};
	char word[30];

	printf("�ܾ �Է��ϼ���:");
	scanf("%s", &word);
	index = 0;
	for (i = 0; i < WORDS; i++)
	{
		if (strcmp(dic[index][0], word) == 0)
		{
			printf("%s : %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	return 0;
}