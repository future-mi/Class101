#include <cstdio>

int main() {
	//int name[10];
	//name[0] = 1;
	//name[1] = 2;
	//name[2] = 3;
	//name[8] = 4;
	//name[9] = 10;

	//printf("%d", name[0]);

	/*
	int myAraay[5] = { 1,5,10,20,100 };

	printf("%d", myAraay[0]);

	for (int i = 0; i < 5; i++) {
		printf("myArray[%d] = %d\n", i, myAraay[i]);
	}
	*/

	/*
	int a = 1;
	int value[3] = {1,34,100};
	// value[3] = 10;	// 알 수 없는 오류가 생겨버림
	printf("Hello World\n");
	printf("%d",value[a]);
	*/

	/*
	// 다차원배열
	// int multiArray[3][3]; 
	
	int multiArray[3][3] = {
		{1, 2, 3},
		{2, 3, 4},
		{4, 5, 6}
	};

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			multiArray[i][k] = i * k;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("%d ", multiArray[i][k]);
		}
		printf("\n");
	}
	*/

	// 1. 연습
	/*
	* 크기가 20인 배열을 만들고 각각의 배열 원소에 2,4,6,8..의 수열을 할당히여 해당 배열을 출력하세요(반복문을 사용하세요)
	*/
	int testArray[20];
	for (int i = 0; i < 20; i++) {
		testArray[i] = 2 * (i + 1);
		printf("testArray[%d] : %d\n", i ,testArray[i]);
	}
	printf("=======================\n");
	// 2. 연습
	/*
	* 크기가 20인 배열을 만들고 각각의 배열 원소에 피보나치 수열을 할당하여 해당배열을 출력하세요(반복문을 사용하세요)
	*/
	int test2Array[20];
	test2Array[0] = 1;
	test2Array[1] = 1;

	printf("test2Array[0] : %d\n", test2Array[0]);
	printf("test2Array[1] : %d\n", test2Array[1]);
	for (int k = 2; k < 20; k++) {
		test2Array[k] = test2Array[k - 1] + test2Array[k - 2];
		printf("test2Array[%d] : %d\n", k, test2Array[k]);
	}
	printf("=======================\n");
	// 3. 연습
	/*
	* 크기가 10x10인 이차원 배열을 만들고 각각의 배열 원소에 원소를 1~100까지 할당한 수 해당배열을 출력하세요(반복문을 사용하세요)
	*/
	int twoArray[10][10];

	int count = 1;
	for (int j = 0; j < 10; j++) {
		for (int m = 0; m < 10; m++) {
			twoArray[j][m] = count;
			count++;
			printf("%d ", twoArray[j][m]);
		}
		printf("\n");
	}
	printf("=======================\n");

	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			twoArray[a][b] = (b + 1) + a * 10;
			printf("%d ", twoArray[a][b]);
		}
		printf("\n");
	}
	printf("=======================\n");

	for (int e = 0; e < 100; e++) {
		twoArray[e / 10][e % 10] = e + 1;
	}
	for (int e = 0; e < 10; e++) {
		for (int f = 0; f < 10; f++) {
			printf("%d ", twoArray[e][f]);
		}
		printf("\n");
	}
	return 0;
}