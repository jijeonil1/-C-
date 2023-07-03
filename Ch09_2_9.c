#include<stdio.h>

void PrintElement(int pNs[]);

int main(){
int pNs[5]={1,2,3,4,5};

PrintElement(pNs);

return 0;

}

void PrintElement(int *pNs){
int i;
for(i=0; i<sizeof(pNs)/sizeof(pNs[0]);i++)//메인함수와 연결되기전 포인터에 대한 크기로 먼저계산하여 warning이 뜸
printf("%d\n", pNs[i]);

}
