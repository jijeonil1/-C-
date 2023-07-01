#include<stdio.h>
int main(){
//1_6 if문의 조건이 0이라면?
int N=7, M=8, K=0;

//if(N=k) --> 책에서는 작동은 될것이라 했지만 작동되지않음 if문의 조건으로 치환연산자만 쓰는것은 안되는듯 하다.

//if(0) if문의 조건이 0이라면 실행하지 않음

if(2)//0만 아니라면 모두 참으로 보아 조건문 실행 가능.
N=M;
printf("%d\n",N);

//1_7
if(1)//그냥 이렇게 해도 실행은 가능하다만 확인함
;

//*** switch문의 조건으로는 정수만 가능하다 ***
//switch문에서 break 안쓸때와 case 조건에 따른 변화.
for(int i=0;i<10;i++)
{
printf("num = %d\n",i);

switch(i){

case 1 :
printf("a"); //i가 2이상부터 출력 x

case 2 :
printf("a");

case 3 :
printf("a");

case 4 :
printf("a");

default :
printf("b");

}
printf("\n");
}
}
