/*
Ë®ÏÉ»¨Êý(daffodil)
*/
#include <cstdio>
#include <math.h>

int isTrue(int x);
int pow(int x, int n);

int main(){
	for (int i = 100; i <= 999; i++){
		if (isTrue(i))
			printf("%d\n",i);
	}
}

int isTrue(int x){
	int a = x / 100;
	int b = x / 10 % 10;
	int c = x % 10;
	if (pow(a, 3) + pow(b, 3) + pow(c, 3) == x)
		return 1;
	else
		return 0;
}

int pow(int x,int n){
	int result = 1;
	for (int i = 0; i < n; i++)
		result *= x;	
	return result;
}