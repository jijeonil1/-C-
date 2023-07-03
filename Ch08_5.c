#include<stdio.h>
#include<stdlib.h>
struct A{
char *Pname;
char *day;
char *name;
char *number;
};

int main(){
struct A LG;
struct A* pLG;
pLG=&LG;
pLG->Pname=malloc(20);
pLG->day=malloc(20);
pLG->name=malloc(20);
pLG->number=malloc(20);

char *a;
int N=0;
while(N!=3){
printf("[메뉴]\n");
printf("1. 입력 2. 출력 3. 종료\n");//책에서는 enum{INPUT = 1, OUTPUT = 2, QUIT = 3};사용 
printf("번호선택");
scanf("%d", &N);
switch(N){
case 1:
printf("제품명 : ");
scanf("%s", pLG->Pname);
printf("날짜 : ");
scanf("%s", pLG->day);
printf("고객명 : ");
scanf("%s", pLG->name);
printf("전화번호 : ");
scanf("%s", pLG->number);

case 2:
printf("제품명: %s  \n",pLG->Pname);
printf("날짜: %s \n ", pLG->day);
printf("고객명 : %s\n", pLG->name);
printf("전화번호 : %s\n", pLG->number);
}

}
free(pLG->name);
free(pLG->day);
free(pLG->number);
free(pLG->Pname);
}
