#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	scanf_s("%d.%d", &x, &y);

	printf("%d\n%d", x, y);

	return 0;
}