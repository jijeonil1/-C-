#include<stdio.h>
int main(){
int i, j, N;
char pstr[256];

printf("정수: ");
scanf("%d", &N);

for(i=0;N>=10;i++)
{
pstr[i] = N%10 + '0';

N/=10;
}
pstr[i] = N%10+'0';
pstr[i+1] = '\0';

for(j=0;j<(i+1)/2;j++)
{
N=pstr[j];
pstr[j] = pstr[i-j];
pstr[i-j] = N;
}

printf("변환: %s\n",pstr);

return 0;
}
