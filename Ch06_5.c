#include<stdio.h>
int main(){
//while문만을 이용하여 반복문
int i=1, a;

printf("구구단 -> 몇단?");
scanf("%d", &a);
while(i<10){
printf("%d x %d = %d\n",a, i, a*i);
i++;
}

//do ~ while 문만을 이용하여 반복문
i=1;
do{
printf("%d x %d = %d\n",a, i, a*i);
i++;
}while(i<10);
}
