//#include <cstdio>
//#include <cmath>  // 수학관련 함수 사용, sin(),cos(),tan(),exp(),pow(),log()
//#include <cstdlib> // malloc(), rand() 
//#include <ctime> // 시간관련한 함수를 사용

#include "Header.h"
// 사용자 정의 헤더는 "" 기호로 include 한다

// C++ 표준 라이브 러리 = C라이브러리
// cstido = stdio.h
// cmath = math.h
// cstdlib = stdlib.h
// ctime = time.h


int main() {

	srand(time(0)); // 현재시간
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