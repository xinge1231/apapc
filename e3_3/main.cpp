/*
ÉßÐÎÌîÊý
*/
#include <cstdio>
#include <string.h>

int matrix[9][9] = { 0 };

int main(){
	int n;
	while (scanf("%d", &n) != EOF){
		memset(matrix, 0, sizeof(matrix));
		int i = 0, j = n - 1;
		matrix[i][j] = 1;
		int tmp = 1;
		while (tmp < n*n){
			while (i < n - 1 && !matrix[i + 1][j])
				matrix[++i][j] = ++tmp;
			while (j > 0 && !matrix[i][j - 1])
				matrix[i][--j] = ++tmp;
			while (i > 0 && !matrix[i - 1][j])
				matrix[--i][j] = ++tmp;
			while (j<n - 1 && !matrix[i][j + 1])
				matrix[i][++j] = ++tmp;
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
	}

}