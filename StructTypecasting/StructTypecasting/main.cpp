#include <cstdio>

int main() {
	float myFloat = 3.14;
	printf("myFloat : %f\n", myFloat);

	/*******************************************/

	int integer_number = 100;
	float real_number; // �Ǽ� %f

	real_number = integer_number; // = �� ����ϸ� �ڵ����� ����ȯ�� ��
	printf("real_number : %f\n", real_number);

	/*******************************************/

	int number1 = 10;
	int number2 = 4;
	float result = (float)number1 / number2; // ���ʸ� ����ȯ�� ��Ű�� ����ϸ� �װɷ� ����..!

	printf("%f\n", result);

	/*******************************************/

	int number3 = 10.0;
	int number4 = 0.1;
	float result2 = number3 - number4;

	printf("%f\n", result2);

	/*******************************************/

	int number5 = 100;
	float number6 = 200.0;
	number5 = number6;

	printf("%d\n", number5);

	return 0;
}