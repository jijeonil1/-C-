#include<stdio.h>
int main(){
int N =-1, M=-1, K=-1;
int T;

printf("정수(3개) : ");
scanf("%d %d %d", &N, &M, &K);
printf("\n");
printf("before : N = %d, M = %d, K = %d\n", N, M, K);

T=N;
N=M;
M=K;
K=T;

printf("after : N = %d, M = %d, K = %d\n", N, M, K);
return 0;
}
