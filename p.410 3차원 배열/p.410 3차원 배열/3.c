#include<stdio.h>

int main(void)
{
	int s[3][3][3];
	int x, y, z;
	int i = 1;
	for (z = 0; z < 3; z++)
		for (y = 0; y < 3; y++)
			for (x = 0; x < 3; x++)
				s[z][y][x] = i++;
	
}