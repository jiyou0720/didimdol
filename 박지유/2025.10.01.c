#include <stdio.h>
int main() {
//https://codeup.kr/problem.php?id=1019
	int y, m, d;

	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

//https://codeup.kr/problem.php?id=1014
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c", y, x);

//https://codeup.kr/problem.php?id=1020
	int num1, num2;

	scanf("%d-%d", &num1, &num2);
	printf("%06d%07d", num1, num2);

//https://codeup.kr/problem.php?id=1023
	int a, b;
	scanf("%d.%d", &a, &b);
	printf("%d\n%d", a, b);

//http://codeup.kr/problem.php?id=1053
	int a;

	scanf("%d", &a);
	printf("%d", !a);

//https://codeup.kr/problem.php?id=1066
	int q, w, e;


	int arr[3];


	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 3; i++) {
		if (arr[i] % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}

//https://codeup.kr/problem.php?id=1079
	char a;


	while (a != 'q') {
		scanf("%c", &a);
		printf("%c", a);
	}

}