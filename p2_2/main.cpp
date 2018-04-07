/*
º«ÐÅµã±ø(hanxin)
*/

#include <cstdio>

void exch(int &x, int &y);

int main(){
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) == 3){
		int flag = 1;
		for (int i = 10; i <= 100; i++){
			if (i % 3 == a&&i % 5 == b&&i % 7 == c){
				printf("%d\n",i);
				flag = 0;
			}
		}
		if (flag)
			printf("No answer\n");
			
	}
}
