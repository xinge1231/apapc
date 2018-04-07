/*
ÊúÊ½ÎÊÌâ
*/
#include <cstdio>
#include <string.h>

int isRight(char buf[], char str[]);
int main(){
	char buf[100];
	char str[10];
	while (scanf("%s", str) == 1){
		for (int i = 100; i <= 999; i++){
			for (int j = 10; j <= 99; j++){
				sprintf(buf, "%d%d%d%d%d\0", i, j, i*(j % 10), i*(j / 10),i*j);
				if (isRight(buf,str)){
					printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n",i,j,i*(j%10),i*(j/10),i*j);
				}
			}
		}
	}
}

int isRight(char buf[],char str[]){
	for (int i = 0; i < strlen(buf); i++){
		if (!strchr(str, buf[i]))
			return 0;
	}
	return 1;
}