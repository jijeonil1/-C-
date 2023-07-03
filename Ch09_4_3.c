#include<stdio.h>
#include<stdlib.h>
int Add(int *a,int n);
int main(){
int* a;
int Num,add,sub;
printf("입력 수 : ");
scanf("%d",&Num);
a=malloc(Num*sizeof(int));
//30이하 랜덤뽑을때로 가정
for(int i=0;i<Num;i+=2)
{a[i]=rand()%30;
printf("%d\t",a[i]);
}
for(int i=1;i<Num;i+=2)
{a[i]=-rand()%30;
printf("%d\t",a[i]);
}
add=Add(a,Num);
printf("\n합 : %d\n",add);
free(a);
}
int Add(int* a, int n){
int add=0;
for(int i=0;i<n;i++)
add+=a[i];

return add;
}
