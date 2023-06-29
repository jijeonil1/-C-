#include <stdio.h>
int main(){
int N=5,M=7;
int T;

printf("before : N = %d, M =  %d\n", N, M);

T=N;
N=M;
M=T;

printf("after : N = %d, M = %d\n", N, M);

return 0;
}
