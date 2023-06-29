#include<stdio.h>
int main(){
int N=-1, M=-1;
int T;

printf("정수(2개) : ");
scanf("%d %d", &N, &M);

printf("\n");
printf("before : N = %d, M = %d\n", N, M);

T=N;
N=M;
M=T;

printf("after : N = %d, M = %d\n", N, M);

return 0;
}
