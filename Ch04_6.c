#include<stdio.h>
#include<math.h>

int num=0;

void cal(int a){
if((a/2)!=0)
{
num++;
a/=2;
cal(a);
}
}

long long int dtob(int a){
long long int b=1,c=1;
b*=pow(10,num-1);
a/=2;
for(int i=num-1;i>0;i--)
{
if((a%2)==1)
{
c*=pow(10,i-1);
b+=c;
}
a/=2;
c=1;
}
return b;
}

int main(){
//06_2 어떠한 10진수를 받았을때 그수의 2진수를 출력
int d;
long long int b=0;
printf("10진수 입력 : \n");
scanf("%d", &d);
cal(d);
b=dtob(d);
printf("2진수 출력 : %lld",b);
return 0;
}
