#include<stdio.h>
int main(){
int nYear = 0;
float fRecord =0.0;

printf("연도 :");
scanf("%d", &nYear);
printf("기록 : ");
scanf(" %f", &fRecord);

printf("당신의 최고 기록은 %d년의 %.1f입니다.", nYear, fRecord);

return 0;

}
