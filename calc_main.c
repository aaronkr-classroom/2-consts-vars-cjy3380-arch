#include <stdio.h>
#include "calc.h"

int main(void) {
	int a = 4, b = 5;

	printf("���ϱ� �����: %d\n", Sum(a, b));
	printf("���� ����� : %d\n", Sub(a, b));
	printf("���ϱ� �����: %d\n", Mul(a, b));
	printf("������ �����: %d\n", Div(a, b));

	printf("������ a�� ���� ���̴�: %.3f\n", circ_area(a));
	printf("������ a�� ���� ��������: %.3f\n", circ_circ(a));

	return 0;
}