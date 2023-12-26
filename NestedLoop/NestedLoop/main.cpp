#include <cstdio>

int main() {
	// break; continue;

	for (;;) { // (;;) 무한반복 for 구문
		printf("반복문 입니다. 숫자를 입력하세요 : ");
		int input;
		fseek(stdin, 0, SEEK_END);
		scanf_s("%d", &input);

		if (input == 0) {
			continue;
		}
		else if (input == 1) {
			break;
		}
		printf("반복문의 마지막 입니다 \n");
	}
	printf("프로그램이 종료되었습니다");
	return 0;
}