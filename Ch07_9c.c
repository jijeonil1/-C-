#include<stdio.h>
#include<stdlib.h>
int main(){
int A[12];
int Max;

for(int i=0;i<12;i++)
A[i]=rand()%20;

Max=A[0];
for(int i=1;i<12;i++)
if(Max<A[i])
Max=A[i];


for(int i=0;i<12;i++)
printf("%d\t", A[i]);
printf("\n");
printf("Max : %d", Max);
}
