#include <cstdio>
/* ���ǹ�
int main() {
	int value1 = 1;
	int value2 = 2;

	int value3 = 10;
	int value4 = 20;
	if (value1 == value2 && value3 == value4) {
		printf("value1�� value2�� ���� �����ϴ�. �׸��� value3�� value4�� �����ϴ�");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1�� value2���� ũ�ų� value3�� value4���� �۽��ϴ�");
	}
	else if (value1 != value2 && value3 != value4) {
		printf("value1�� value2�� �ٸ���, value3�� value4�� �ٸ��ϴ�");
	}
	else {
		printf("value1�� value2���� �۽��ϴ�");
	}
	return 0;
}
*/


/* �ݺ���
int main() {
	int count = 0;
	for (int i = 0; i < 100; i++) {
		count = count + 10;
	}

	printf("count : %d", count);
	return 0;
}
*/

int getInput() {
	int input;
	printf("���ڸ� �Է����ּ��� : ");
	fseek(stdin, 0, SEEK_END); // scanf�� ����� �� �ʿ��� ����
	scanf_s("%d", &input);

	return input;
}

int main() {
	int input = getInput();

	if(input <= 0){
		printf("���ڸ� �� �� �Է��Ͽ����ϴ�.");
	}
	else {
		for (int i = 0; i < input; i++) {
			printf("A");
		}
	}
	
	printf("\n"); // �ٹٲ޿�

	input = getInput();

	if (input <= 0) {
		printf("���ڸ� �� �� �Է��Ͽ����ϴ�");
	}
	else {
		for (int j = 0; j < input; j++) {
			printf("B");
		}
	}
	return 0;
}
