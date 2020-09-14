//#include <stdio.h>
//
//int main(void)
//{
//	// 연도를 입력받을 변수 선언 및 초기화
//	int year = 0;
//
//	// 사용자로부터 연도를 입력받기
//	printf("연도를 입력하시오: ");
//	scanf_s("%d", &year);
//
//	// 윤년인지 판단하여 처리하기(조건 연산자 사용하기)
//	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("윤년입니다.\n\n") : printf("윤년이 아닙니다.\n\n");
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	// 줄 수를 입력받을 변수 선언 및 초기화
	int line = 0;

	// 사용자로부터 줄 수 입력받기
	printf("줄 수를 입력하시오: ");
	scanf_s("%d", &line);

	// for문을 이용하여 별 찍기 처리하기
	for (int i = 0;i < line;i++) {
		for (int j = 0;j < line - i;j++) {
			printf(" ");
		}
		for (int k = 0;k < i;k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	return 0;
}