#include<stdio.h>

int main(){

//관계연산자

int nA, nB=5;
nA = nB ==5; //nA는 nB가 5가맞는지에 대한 1 or 0이 저장됨
printf("%d, %d\n", nA, nB);


//시프트 연산자
int a=20;
printf("%d   %d\n", a, a>>1);

//1_3
char ch='A';
int ch_1;
float fl = 5.0;
ch='A'+3; //ch는 D가 되게 됌
ch_1='A'+3;
printf("문자형 'A'+3 = %c\n", ch); 
printf("정수형 'A'+3 = %d\n", ch_1);

//1_6
//printf("문자('A') + 실수(5.0) = %c\n", ch + f1);--> 책에서는 오류가 안날수 있다 하였지만 오류가 나옴, 형변환 잘시키는것이 중요.

//1_12
int N1 = 70, N2 = 10;
printf("%c\n", N1+N2); //아스키로 변환됨 80 = P

//1_13
char as = 'C';
printf("%c\n",++as);// 'C'++은 안되자만 문자형 변수에 ++은 가능한것으로 보임.

//1_15
char qw = 'z';
qw += '+';
printf("%c\n", qw);//아스키코드의 덧셈이라 생각하고 쓰려면 쓸수 있는 코드

}
