#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k, arr[10][10] = { 0 };
	printf("��ӡ��������ǣ�\n");
	for (i = 0; i<10; i++){
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i<10; i++){
		for (j = 1; j<10; j++){
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i<10; i++){
		for (k = 0; k<10 - i; k++){
			printf(" ");
		}
		for (j = 0; j <= i; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
