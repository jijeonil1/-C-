#include<stdio.h>
int main(){
//3_4
int N=0x10, M=0xF1;
N&=M; // &은 비트연산자 N=10000, M=11111 
printf("%d\n",N);
}
