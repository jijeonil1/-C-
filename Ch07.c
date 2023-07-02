//Ch07.c
#include<stdio.h>
#include<stdlib.h>
int main()
{
int pArray[4]={1,0,};
printf("%d\n", pArray[0]);
int Array[100][100];
int *pNs = Array[1];
for(int i =0 ; i<100; i++){
pNs[i]=i+3;
for(int j=0;j<100; j++)
pNs[j]=j+7;
}
printf("%d", *pNs+1);

//
int i,nSize;
int *pDynamic;

printf("배열크기 : ");
scanf(" %d", &nSize);

pDynamic=(int *)malloc(nSize* sizeof(int));// malloc뒤에 자료형에 따라 sizeof(자료형변수) 생각

for(i=0;i<nSize;i++)
pDynamic[i]=i;

for(i=0;i<nSize;i++){
 printf("%4d",pDynamic[i]);
 if(i%10 == 9)
 printf("\n");
}
free(pDynamic); 
return 0;
}
