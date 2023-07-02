#include<stdio.h>
int main(){
int N,i=2,Temp;
printf(" 정수 : ");
scanf("%d", &N);

while(i<N){
if(N%i==0)
{Temp=i;
break;
}
else 
Temp = 0;
i++;
}
if(Temp==0)
printf("결과 : 소수");
else
printf("결과 : 합성수[%d]", Temp);

}
