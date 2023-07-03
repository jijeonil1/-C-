#include<stdio.h>
#include<string.h>
struct BOOK
{
char pPreface[100];
int B;
};
int main(){
struct BOOK C_bible;
struct BOOK* BA;
BA=&C_bible;
strcpy(C_bible.pPreface,"제가 배울 때도 C언어는 어려웠습니다.");
char* p;
int AS;
BA->B=80;
strcpy(BA->pPreface,"asdasd");
printf("%s", C_bible.pPreface);
printf("%d", BA->B);

return 0;
}
