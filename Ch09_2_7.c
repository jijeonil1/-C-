#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char* ptr;
ptr=malloc(20);//문자열을 저장하기위해 메모리 할당

strcpy(ptr, "hello");

printf("%s", ptr);

free(ptr);

return 0;
}
