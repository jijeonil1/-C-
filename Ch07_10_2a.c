#include<stdio.h>
int main(){
int i, N=0, nBig =1;
char pstr[256];

printf("숫자: ");
scanf("%s", pstr);

for(i=0;pstr[i] !='\0'; i++)
nBig *=10;
nBig/=10;

for(i=0;pstr[i]!='\0';i++)
{
N+=(pstr[i]-'0')*nBig;

nBig/=10;
}

printf("변환: %d\n", N);

return 0;
}
