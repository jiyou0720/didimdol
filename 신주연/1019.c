//#include <stdio.h>
//
//int main()
//{
//	//https://codeup.kr/problem.php?id=1019
//	/*
//	int d, m, y = 0;
//	//printf("����� �¾ ������ �Է����ּ���.: ");
//	scanf_s("%d", &y, &m, &d);
//
//	
//	//printf("����� �¾ ���� �Է����ּ���.: ");
//	//scanf_s("%d", &m);
//
//	//printf("����� �¾ ���� �Է����ּ���.: ");
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
	//printf("����� �¾ ������ �Է����ּ���.: ");
	scanf_s("%d.%d.%d", &y, &m, &d);


	printf("%04d.%02d.%02d", y, m, d);

	return 0;
}