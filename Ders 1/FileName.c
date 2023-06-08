#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main() {

	unsigned short i, j, k;
	i = 7;
	j = 8;
	k = 9;
	printf("%d", i ^ j & k);
	return 0;
}