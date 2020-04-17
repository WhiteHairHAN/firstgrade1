#include<stdio.h>
#include<stdio.h>

char s[] = "man is immortal, because he has a soul";
char seps[] = " , \t\n";
char *token;
int main(void)
{
	token = strtok(s, seps);

	while (token != NULL)
	{
		printf("ÅäÅ« : %s\n", token);
		token = strtok(NULL, seps);
	}
	return 0;
}