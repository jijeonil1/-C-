#include<stdio.h>
int main(){
int nTemp, nDecimal, nMulti, nOctal;
long long int nBinary;
printf("10진수 : ");
scanf(" %d", &nTemp);

printf("\n");

nDecimal = nTemp;
for(nMulti=1, nOctal=0;nDecimal !=0;nMulti *=10, nDecimal /=8)//8진수
nOctal +=(nDecimal %8) *nMulti;

nDecimal = nTemp;
for(nMulti=1, nBinary=0;nDecimal !=0;nMulti *=10, nDecimal /=2) //2진수
nBinary += (nDecimal %2)*nMulti;

printf("2진수      : %lld\n",nBinary);

printf("for 문 8진수(for)       : %d\n",nOctal);

//while 문
nDecimal = nTemp;
nMulti=1, nOctal=0;
while(nDecimal!=0){
nOctal +=(nDecimal%8)*nMulti;
nMulti*=10;
nDecimal/=8;
}
printf("while 문 8진수      : %d\n",nOctal);

//do~ while 문
nDecimal = nTemp;
nMulti=1, nOctal=0;
do{
nOctal += (nDecimal %8)*nMulti;
nMulti*=10, nDecimal/=8;
}while(nDecimal!=0);
printf("do~while 문 8진수      : %d\n",nOctal);

return 0;
}
