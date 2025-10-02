//#include <stdio.h>
//
//int main()
//{
//	//https://codeup.kr/problem.php?id=1019
//	/*
//	int d, m, y = 0;
//	//printf("당신이 태어난 연도을 입력해주세요.: ");
//	scanf_s("%d", &y, &m, &d);
//
//	
//	//printf("당신이 태어난 월을 입력해주세요.: ");
//	//scanf_s("%d", &m);
//
//	//printf("당신이 태어난 일을 입력해주세요.: ");
//	//scanf_s("%d", &d);
//	
//	printf("%2d-%2d-%4d", d, m, y);
//
//	return 0;
//	*/
//}

#include <stdio.h>

int main()
{
	//https://codeup.kr/problem.php?id=1019

	int d, m, y = 0;
	//printf("당신이 태어난 연도을 입력해주세요.: ");
	scanf_s("%d.%d.%d", &y, &m, &d);


	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}