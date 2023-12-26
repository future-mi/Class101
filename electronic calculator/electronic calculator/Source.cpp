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
	case '+':	// 43(아스키코드)
		result = value1 + value2;
		printf("결과는 %.3f 입니다", result);
		break;
	case '-':
		result = value1 - value2;
//		printf("결과는 %.3f 입니다", result);
		break;
	case '/':
		result = value1 / value2;
//		printf("결과는 %.3f 입니다", result);
		break;
	case '*':
		result = value1 * value2;
//		printf("결과는 %.3f 입니다", result);
		break;
	case '%':
		result = (int)value1 % (int)value2;
//		printf("결과는 %.3f 입니다", result);
		break;
	default:
//		printf("올바르지 않은 연산자입니다");
		valid = false;
		break;
	}
	if (valid == true) {
		printf("결과는 %.3f 입니다", result);
	}
	else {
		printf("올바르지 않은 연산자입니다.");
	}
	return 0;
}

float getFloat() {
	float input;
	fseek(stdin, 0, SEEK_END);
	printf("실수를 입력해주세요: ");
	scanf_s("%f", &input);

	return input;
}

char getChar() {
	char input;
	fseek(stdin, 0, SEEK_END);
	printf("연산자를 입력해주세요: ");
	scanf_s("%c", &input);

	return input;
}

