//#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int inputFunction() {
	int input;
	printf("�Է����ּ��� : ");
	scanf_s("%d", &input);	// Mac�� scanf�� �ᵵ �� + &�� �־�� scan����
	printf("�ԷµȰ� : %d\n", input);

	return 0;
}

int myValue(int a, int b, int c) {
	printf("%d, %d, %d\n", a, b, c);
	return a + b / c;
}

int main() {
	int value = myValue(100, 200, 400);
	printf("value : %d", value);

	return 0;
}