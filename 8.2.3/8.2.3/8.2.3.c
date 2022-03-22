#include <stdio.h>

int main()
{
	char const *keyword[] = { "do", "for" };
	int matrix[3][1] = { 1, 1 };
	printf("%d,%d", matrix, *(matrix));
	getchar();
}