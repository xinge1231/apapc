/*
µ¹Èý½Ç(triangle)
*/

#include <cstdio>

int main(){
	int n;
	while (scanf("%d", &n) == 1){
		for(int i = 0; i < n; i++){
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int k = 0; k < 2 * (n - i) - 1; k++){
				printf("#");
			}
			printf("\n");
		}
	}
}