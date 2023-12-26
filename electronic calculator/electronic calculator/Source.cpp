#include "Header.h"

int main() {
	float value1;
	float value2;
	char oper;

	float result;
	bool valid = true;

	value1 = getFloat();
	value2 = getFloat();
	oper = getChar();
	
	switch (oper) {
	case '+':	// 43(�ƽ�Ű�ڵ�)
		result = value1 + value2;
		printf("����� %.3f �Դϴ�", result);
		break;
	case '-':
		result = value1 - value2;
//		printf("����� %.3f �Դϴ�", result);
		break;
	case '/':
		result = value1 / value2;
//		printf("����� %.3f �Դϴ�", result);
		break;
	case '*':
		result = value1 * value2;
//		printf("����� %.3f �Դϴ�", result);
		break;
	case '%':
		result = (int)value1 % (int)value2;
//		printf("����� %.3f �Դϴ�", result);
		break;
	default:
//		printf("�ùٸ��� ���� �������Դϴ�");
		valid = false;
		break;
	}
	if (valid == true) {
		printf("����� %.3f �Դϴ�", result);
	}
	else {
		printf("�ùٸ��� ���� �������Դϴ�.");
	}
	return 0;
}

float getFloat() {
	float input;
	fseek(stdin, 0, SEEK_END);
	printf("�Ǽ��� �Է����ּ���: ");
	scanf_s("%f", &input);

	return input;
}

char getChar() {
	char input;
	fseek(stdin, 0, SEEK_END);
	printf("�����ڸ� �Է����ּ���: ");
	scanf_s("%c", &input);

	return input;
}

