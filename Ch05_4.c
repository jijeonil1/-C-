#include<stdio.h>
int main(){

//1
int N1=0,N2=1,M=2;
M=(N1>N2)? N1:N2;

//2
char ch;
ch=(ch>='a' && ch<= 'z')? ch-32:ch+32;

//3
int N=-2;
(N%2==0)?printf("짝수\n"):printf("홀수\n");//출력문도 가능

//4
N=(N<0)?0:N;
printf("%d",N);

//결론: 한가지 조건에 의해서 어떠한 것이 정해진다면 삼항 연산자를 생각해보자
// &&와 ||의 차이 잘 구분하자
}
