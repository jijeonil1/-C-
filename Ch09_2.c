#include<stdio.h>
#include<stdlib.h>
int main(){
int A[12];

for(int i=0;i<12;i++)
A[i]=rand()%20;

printf("첨자: ");
for(int i=0;i<12;i++)
printf("\t%d",i);

printf("\n원본: ");
for(int i=0;i<12;i++)
printf("\t%d",A[i]);

for(int i=0;i<12;i++)
A[i]*=2;

printf("\n변환: ");
for(int i=0;i<12;i++)
printf("\t%d",A[i]);

}
