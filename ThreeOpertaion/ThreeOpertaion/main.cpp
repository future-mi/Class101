#include <cstdio>

int getInput() {
	int input;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	return input;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int pow(int a, int b) {
	int value = 1;
	
	for (int i = 0; i < b; i++) {
		value = value * a;
	}
	return value;
}

int main() {
	printf("input1 ���� �Է����ּ��� : ");
	int input1 = getInput();

	printf("input2 ���� �Է����ּ��� : ");
	int input2 = getInput();

	printf("operation ���� �Է����ּ��� : ");
	int operation = getInput();

	int result;
	if (operation == 0) {
		result = sum(input1, input2);
		printf("1. result : %d", result);
	}
	else if (operation == 1) {
		result = sub(input1, input2);
		printf("2. result : %d", result);
	}
	else if (operation == 2) {
		result = pow(input1, input2);
		printf("3. result : % d", result);
	}
	else {
		printf("�ùٸ� ���� �ƴմϴ�.");
	}

	return 0;
}