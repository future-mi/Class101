#include <cstdio>
/*
* 크기가 5x5인 이차원 배열 3개를 만들고 
* 첫번째 배열은 1,2,3,4,... 으로 할당하고
* 두번째 배열은 2,4,6,8,... 으로 할당하며
* 두 배열의 동일한 인덱스에 존재하는 원소들의 합을 세번째 배열에 저장한 후
* 해당 배열을 출력하세요(반복문을 사용하세요)
*/
int main() {
	int multiArray1[5][5];
	int multiArray2[5][5];
	int multiArray3[5][5];

	int count = 1;

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			multiArray1[i][k] = count;
			count++;
		}
	}

	count = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			multiArray2[i][k] = count * 2;
			count++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			multiArray3[i][k] = multiArray1[i][k] + multiArray2[i][k];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("%d ", multiArray3[i][k]);
		}
		printf("\n");
	}
	return 0;
}