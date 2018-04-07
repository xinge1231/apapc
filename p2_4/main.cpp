/*
вспРап╨м(subsequence)
*/
#include <cstdio>

int main(){
	int n, m;
	while (scanf("%d%d", &n, &m) == 2 && n&&m){ 
		double result = 0;
		for (int i = n; i <= m; i++){
			result += 1.0 /i/i;
		}
		printf("%.5f", result);
	}
}