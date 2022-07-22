#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, e = 0;
	scanf("%d", &q);
	while (q)
	{
		e = 0;
		e = q % 10;
		printf("%d", e);
		q /= 10;
	}
	return 0;
}