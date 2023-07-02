#include<stdio.h>
int main(){
char M[]="C is the best!";
printf("%lu\n",sizeof(M));//null포함하여 +1됌

//15
char O[3][10] = {"123", "234", "456789"};
printf("%s\n", O[0]);

//18
int *a,b;//a는 포인터, b는 int형 변수
printf("%lu	%lu\n", sizeof(a), sizeof(b));


return 0; 
}
