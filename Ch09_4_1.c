#include<stdio.h>
#include<stdlib.h>
int* Rand(int n);
int main(){
int N;
int *a;
printf("크기 : ");
scanf("%d", &N);
a=Rand(N);
for(int i=0;a[i]!=0;i++)
printf("%d\t",a[i]);

}
int* Rand(int n){
int *a;
a=malloc(n*sizeof(int));

for(int i=0;i<n;i++)
a[i]=rand()%20;
return a;
free(a);
}
