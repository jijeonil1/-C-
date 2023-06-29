#include<stdio.h>
int main(){
char chPoint1,chPoint2,chPoint3;
chPoint1=chPoint2=chPoint3 = 'Z';

printf("학점입력(3개) : ");
scanf("%c %c %c", &chPoint1, &chPoint2, &chPoint3);

printf("\n");
printf("중문학 개론 : %c\n", chPoint1);
printf("현대 중국어 : %c\n", chPoint2);
printf("논어 : %c\n", chPoint3);

return 0;
}
