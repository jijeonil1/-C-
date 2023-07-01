#include<stdio.h>
int main(){
//2_4
//for(;;) -->반복조건이 없는 if문은 무한루프== break문 없는 while(1) 
int num=0;
//2_7
for(printf("hello"); printf("world");printf("richie"))
{num++;
if(num==5)
break;
} //-> 초깃값 hello 나오고 world richie 반복제어문을 설정하지 않는다면 for(1;2;3)이라 했을때 1,2,3,2,3,2,3,2,3...반복된다는것을 이용하면 다양한 것들을 할수도 있을듯. 
}
