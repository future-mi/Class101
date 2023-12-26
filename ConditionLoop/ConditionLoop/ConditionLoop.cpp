#include <cstdio>
/* 조건문
int main() {
	int value1 = 1;
	int value2 = 2;

	int value3 = 10;
	int value4 = 20;
	if (value1 == value2 && value3 == value4) {
		printf("value1과 value2는 서로 같습니다. 그리고 value3과 value4는 같습니다");
	}
	else if (value1 > value2 || value3 < value4) {
		printf("value1은 value2보다 크거나 value3은 value4보다 작습니다");
	}
	else if (value1 != value2 && value3 != value4) {
		printf("value1과 value2는 다르고, value3과 value4는 다릅니다");
	}
	else {
		printf("value1은 value2보다 작습니다");
	}
	return 0;
}
*/


/* 반복문
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
	printf("숫자를 입력해주세요 : ");
	fseek(stdin, 0, SEEK_END); // scanf를 사용할 때 필요한 구문
	scanf_s("%d", &input);

	return input;
}

int main() {
	int input = getInput();

	if(input <= 0){
		printf("숫자를 잘 못 입력하였습니다.");
	}
	else {
		for (int i = 0; i < input; i++) {
			printf("A");
		}
	}
	
	printf("\n"); // 줄바꿈용

	input = getInput();

	if (input <= 0) {
		printf("숫자를 잘 못 입력하였습니다");
	}
	else {
		for (int j = 0; j < input; j++) {
			printf("B");
		}
	}
	return 0;
}
