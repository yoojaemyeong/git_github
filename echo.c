/* echo program ^\n 는 터미널창에서 입력된 모든 문자열을 의미*/
#include <stdio.h>
int main(){
	char input[128] = {0};
	printf("입력> ");
	scanf("%[^\n]s",input);
	printf("출력> %s\n",input);
}
