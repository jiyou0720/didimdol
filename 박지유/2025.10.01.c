#include <stdio.h>
int main() {
	printf("2025243175������\n");
	int i, j;


	/*for (i = 0; i <= 9; i++) {
		printf("==%d�� ����==\n", i);
		for(j = 1;j <= 9; j++){

			printf("%d * %d = %2d\n", i, j, i * j);

		}
		printf("==%d�� ��==\n", i);
		printf("\n");
	}*/


	int num;
	printf("�� �?\n");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = num; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= num; i++) {
		for (j = num; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n");

	for (i = num; i >= 1; i--) {
		for (j = num; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	/*for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}