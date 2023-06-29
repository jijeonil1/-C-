#include<stdio.h>
int main(){
printf("1번 문제\n");

int n[2][9];
printf("소수는 : \n");
for(int i=0; i<9; i++)
{
n[0][i]=i+1;
n[1][i]=0;
}

for(int j=0; j<9; j++){
for(int i=0; i<9; i++){
if(n[0][j]%(i+1)==0)
n[1][j]+=1;}
}

for(int i=0;i<9;i++){
if(n[1][i]==2)
printf(" %d",n[0][i]);
}
printf("\n");






printf("2번 문제\n");
printf("%s\n","Hello");
printf("3번 문제\n");
long int l=32767;
printf("%ld\n",l);
long long int a=9111111111111;
printf("4번 문제\n");
printf("주민번호는 %lld",a);

}
