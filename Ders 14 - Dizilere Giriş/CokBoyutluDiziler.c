#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	/*int matrix[2][2] = { {5,8},{4,4} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}*/

	int matrix[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d. satirin %d. elemani gir: ",i ,j);
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}