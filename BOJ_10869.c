#include <stdio.h>

int get_int(void);
void get_hap(int a, int b);
int get_cha(int a, int b);
void get_gop(int a, int b);
int get_bun(int a, int b);


int main(void)
{
	// �� ������ �Է¹��� �Լ� ȣ��(�Ű����� ����, ��ȯ�� ����)
	int a = get_int();
	int b = get_int();

	// ���� ���ϴ� �Լ� ȣ��(�Ű����� �ְ�, ��ȯ�� ����)
	get_hap(a,b);

	// ���� ���ϴ� �Լ� ȣ��(�Ű����� �ְ�, ��ȯ�� ����)
	printf("�� ���� ���� %d�Դϴ�.\n", get_cha(a, b));

	// ���� ���ϴ� �Լ� ȣ��(�Ű����� �ְ�, ��ȯ�� ����)
	get_gop(a, b);

	// �����⸦ ���ϴ� �Լ� ȣ��(�Ű����� �ְ�, ��ȯ�� ����)
	printf("�� ���� ������� %d�Դϴ�.\n\n", get_bun(a, b));

	return 0;
}

int get_int(void) {
	int n = 0;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	return n;
}

void get_hap(int a, int b) {
	printf("�� ���� ���� %d�Դϴ�.\n", a + b);
}

int get_cha(int a, int b) {
	return a - b;
}

void get_gop(int a, int b) {
	printf("�� ���� ���� %d�Դϴ�.\n", a * b);
}

int get_bun(int a, int b) {
	return a / b;
}