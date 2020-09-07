#include <stdio.h>

int get_int(void);
void get_hap(int a, int b);
int get_cha(int a, int b);
void get_gop(int a, int b);
int get_bun(int a, int b);


int main(void)
{
	// 두 정수를 입력받을 함수 호출(매개변수 없고, 반환값 있음)
	int a = get_int();
	int b = get_int();

	// 합을 구하는 함수 호출(매개변수 있고, 반환값 없음)
	get_hap(a,b);

	// 차를 구하는 함수 호출(매개변수 있고, 반환값 있음)
	printf("두 수의 차는 %d입니다.\n", get_cha(a, b));

	// 곱을 구하는 함수 호출(매개변수 있고, 반환값 없음)
	get_gop(a, b);

	// 나누기를 구하는 함수 호출(매개변수 있고, 반환값 있음)
	printf("두 수의 나누기는 %d입니다.\n\n", get_bun(a, b));

	return 0;
}

int get_int(void) {
	int n = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	return n;
}

void get_hap(int a, int b) {
	printf("두 수의 합은 %d입니다.\n", a + b);
}

int get_cha(int a, int b) {
	return a - b;
}

void get_gop(int a, int b) {
	printf("두 수의 곱은 %d입니다.\n", a * b);
}

int get_bun(int a, int b) {
	return a / b;
}