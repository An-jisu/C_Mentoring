//#include <stdio.h>
//
//int main(void)
//{
//	// ������ �Է¹��� ���� ���� �� �ʱ�ȭ
//	int year = 0;
//
//	// ����ڷκ��� ������ �Է¹ޱ�
//	printf("������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &year);
//
//	// �������� �Ǵ��Ͽ� ó���ϱ�(���� ������ ����ϱ�)
//	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("�����Դϴ�.\n\n") : printf("������ �ƴմϴ�.\n\n");
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	// �� ���� �Է¹��� ���� ���� �� �ʱ�ȭ
	int line = 0;

	// ����ڷκ��� �� �� �Է¹ޱ�
	printf("�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &line);

	// for���� �̿��Ͽ� �� ��� ó���ϱ�
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