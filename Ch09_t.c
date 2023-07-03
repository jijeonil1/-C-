#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char *a = NULL;
char *b;
size_t size = 0;//0으로 초기화 함으로써 getline함수와 메모리할당부분에서의 충돌을 막음, size_t 자료형은 구현에 따라 크기가 달라질 수 있음, 일반적으로 메모리 주소나 크기를 표현하는 데에 사용되는 자료형으로 선택된다. 주로 배열의 크기, 메모리 할당 함수(예: malloc, realloc)에 전달되는 메모리 크기, 그리고 sizeof 연산자의 결과값 등을 나타낼 때 사용.

printf("문자열을 입력하세요: ");
getline(&a, &size, stdin);
printf("%zu",size);
//b=backward(a);

free(a);
return 0;
}

