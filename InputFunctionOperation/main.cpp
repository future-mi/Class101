//#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int inputFunction() {
	int input;
	printf("입력해주세요 : ");
	scanf_s("%d", &input);	// Mac은 scanf만 써도 됨 + &를 넣어야 scan가능
	printf("입력된값 : %d\n", input);

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