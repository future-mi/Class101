#include <cstdio>

int main() {
	// break; continue;

	for (;;) { // (;;) ���ѹݺ� for ����
		printf("�ݺ��� �Դϴ�. ���ڸ� �Է��ϼ��� : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			break;
		}
		printf("�ݺ����� ������ �Դϴ� \n");
	}
	printf("���α׷��� ����Ǿ����ϴ�");
	return 0;
}