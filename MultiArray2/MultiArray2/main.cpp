#include <cstdio>
/*
* ũ�Ⱑ 5x5�� ������ �迭 3���� ����� 
* ù��° �迭�� 1,2,3,4,... ���� �Ҵ��ϰ�
* �ι�° �迭�� 2,4,6,8,... ���� �Ҵ��ϸ�
* �� �迭�� ������ �ε����� �����ϴ� ���ҵ��� ���� ����° �迭�� ������ ��
* �ش� �迭�� ����ϼ���(�ݺ����� ����ϼ���)
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