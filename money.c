#include <stdio.h>
int main(void) {
	int won;
	won = 10000000;
	printf("�� ���࿡�� %d\\ �ֽ��ϴ�.\n", won);

	char* easy_won = "10,000,000";
	printf("�� ���࿡�� %s\\ �ֽ��ϴ�.\n", easy_won);

	printf("+500,000\\ ����~\n");
	easy_won = "10,500,000";
	printf("�����ؼ� ���� %s\\ �ֽ��ϴ�.\n", easy_won);

	float bc = 10.123456789;
	printf("Bitcoin ����: %.fBC\n", bc);

	bc = bc + 0.34567;
	printf("���� Bitcoin ����: %.fBC\n", bc);

	return 0;
}




#include <stdio.h>
int main(void) {
	printf("\tHello\tClass\n");
	printf("I said,\"Hello\"");
	printf("This is a backslash\\\n");
	return 0;
}