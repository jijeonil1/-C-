#include<stdio.h>
int main(){
int i, N, nTemp;
char pstr[256];

printf("정수: ");
scanf("%d", &N);

nTemp = N;
for(i=1; nTemp /=10; i++)
;

pstr[i] = '\0';
while(--i>=0){
pstr[i] = N%10+'0';
N/=10;
}

printf("변환: %s\n", pstr);

return 0;

}
