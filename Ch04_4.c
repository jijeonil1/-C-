#include<stdio.h>
int main(){

//4_2 정수 M을 4배로 증가(비트연산자 사용)
int M=8;
printf("M의 4배 : %d\n", M<<2);//2의 제곱배수의증가는 비트연산자를 이용하여 가능
printf("M의 1/4배 : %d\n",M>>2);

//4_3 정수 N의 부호 변경 (1의 보수 사용)
int N=-7;
//N = ~(--N); --> 교재에는 가능하다 나오는데  warning: multiple unsequenced modifications to 'N'이뜨면서 안나옴.. 밑의 코드로 대체.
N=~N;
N+=1;
printf("%d\n", N);
}
