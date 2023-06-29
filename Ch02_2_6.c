#include<stdio.h>
int main(){

char ch;
printf("문자 입력:");
scanf("%c", &ch);
printf("%c\t%d\t%x", ch, ch, ch);
return 0;
}
