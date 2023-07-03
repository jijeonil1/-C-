#include<stdio.h>

int main()
{
int i, N, nBig;
char pstr[256] = "0";

printf("정수: ");
scanf("%d", &N);

for(nBig =1;nBig<=N-1;nBig*=10)//몇자리수인지 나타내기
;

for(i=0; nBig!=0;i++)
{
pstr[i] = N/nBig + '0';

N%=nBig;
nBig/=10;
}
pstr[i] = '\0';

printf("변환: %s\n", pstr);

return 0;

}
