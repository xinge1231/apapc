/*
≈≈¡–£®permutation£©
*/
#include <cstdio>

int hash[] = { 0 };
int isLegal(int x, int hash[]){
	if (x >= 123 && x <= 987){
		if (hash[x / 100] == 0) {
			hash[x / 100] = 1;
			if (hash[x / 10 % 10] == 0){
				hash[x / 10 % 10] = 1;
				if (hash[x % 10] == 0){
					hash[x % 10] = 1;
					return 1;
				}
			}
		}
	}
	return 0;
}
int main(){

	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			for (int k = 1; k <= 9; k++){
				int abc = i * 100 + j * 10 + k;
				int def = abc * 2;
				int ghi = abc * 3;
				int hash[10] = { 0 };
				if (isLegal(abc, hash) && isLegal(def, hash) && isLegal(ghi, hash)){
					printf("%d %d %d\n", abc, def, ghi);
				}

			}
			hash[j] = 0;
		}
		hash[i] = 0;
	}
}