//#include <cstdio>
//#include <cmath>  // ���а��� �Լ� ���, sin(),cos(),tan(),exp(),pow(),log()
//#include <cstdlib> // malloc(), rand() 
//#include <ctime> // �ð������� �Լ��� ���

#include "Header.h"
// ����� ���� ����� "" ��ȣ�� include �Ѵ�

// C++ ǥ�� ���̺� ���� = C���̺귯��
// cstido = stdio.h
// cmath = math.h
// cstdlib = stdlib.h
// ctime = time.h


int main() {

	srand(time(0)); // ����ð�
	printf("%f\n",pow(2.0, 10));
	printf("%f\n", sin(3.141592/2.0));
	printf("%d\n", rand() % 10);

	////////////////////////////////////////////

	int value1 = 100;
	int value2 = 200;

	int result = add(value1, value2);

	printf("%d\n", result);

	Marine m;
	m.hp = 100;
	m.mp = 1;

	printf("Marin.hp = %d", m.hp);

	return 0;
}

int add(int a, int b) {
	return a + b;
}