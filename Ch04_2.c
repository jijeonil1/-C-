#include <stdio.h>
int main(){
int N;

printf("정수 입력(0-255) : ");
scanf("%d", &N);

printf("\n");

printf("비트 스위치\n");
printf("------------------\n");
printf("0 : %d\n", (N&1)==1);
printf("1 : %d\n", (N&2)==2);
printf("2 : %d\n", (N&4)==4);
printf("3 : %d\n", (N&8)==8);
printf("4 : %d\n", (N&16)==16);
printf("5 : %d\n", (N&32)==32);
printf("6 : %d\n", (N&64)==64);
printf("7 : %d\n", (N&128)==128);
printf("------------------\n");

return 0;

}
