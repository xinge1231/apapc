/*
分数化小数(decimal)
*/

#include <cstdio>

int main(){
	int a, b, c;
	int num = 0;
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		printf("Case %d:%d.", num, a / b);
		num++;
		int dec = a%b;
		for (int i = 1; i < c; i++){
			//dec=dec*10/b
			printf("%d", dec * 10 / b);
			dec = dec * 10 % b;
		}
		int next = dec * 10 / b;
		if (next >= 5)
			dec = dec * 10 / b + 1;
		else
			dec = dec * 10 / b;
		printf("%d\n", dec);
	}
}