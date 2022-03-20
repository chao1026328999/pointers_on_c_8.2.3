#include <stdio.h>

int main()
{
	int matrix[3][1] = { 1, 1 };
	printf("%d,%d", matrix, *(matrix));
	getchar();
}