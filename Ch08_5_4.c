#include<stdio.h>
//gets함수대신 fgets함수를 쓰자 
enum{ INPUT = 1, OUTPUT = 2, UPDATE = 3, DELETE = 4, QUIT = 5};

struct DVD
{
int nBarcode;
char pTitle[30];
char pActor[60];
int nRunningtime;
int nRentprice;
};

int main()
{
int i, nMenu, nBarcode;
struct DVD pDVD[20];//배열을 이용하여 저장-->구조체도 결국 자료형과 같음

for(i=0; i<20; i++)
pDVD[i].nBarcode=0;// 모든 배열 0으로 초기화

while(1)
{
printf("메뉴\n");
printf("1. 입력\t2. 출력\t3. 수정\t4. 삭제\t5. 종료\n\n");

printf("번호선택: ");
scanf("%d", &nMenu);
getchar();
printf("\n");

if(nMenu==INPUT)
{
for(i=0;i<20;i++)
if(pDVD[i].nBarcode==0)
break;

printf("제목 : ");
fgets(pDVD[i].pTitle,30,stdin);
printf("주연 : ");
fgets(pDVD[i].pActor,60,stdin);
printf("상영시간 : ");
scanf("%d", &pDVD[i].nRunningtime);
printf("대여료 : ");
scanf("%d", &pDVD[i].nRentprice);

pDVD[i].nBarcode=i+1;
printf("\n");
}
else if(nMenu == OUTPUT)
{
for(i=0;i<20;i++)
{
if(pDVD[i].nBarcode !=0)
{
printf("바코드 : %d\n",pDVD[i].nBarcode);
printf("제목 : %s\n",pDVD[i].pTitle);
printf("주연 : %s\n",pDVD[i].pActor);
printf("상영시간 : %d\n",pDVD[i].nRunningtime);
printf("제목 : %d\n",pDVD[i].nRentprice);
printf("\n");

}
}
}
else if(nMenu==UPDATE)
{
printf("바코드 : ");
scanf("%d", &nBarcode);
getchar();
printf("\n");

if(nBarcode == 0)
continue;

for(i=0;i<20;i++)
if(pDVD[i].nBarcode == nBarcode)
break;

if(i!=20)
{
printf("제목 : ");
fgets(pDVD[i].pTitle,30,stdin);
printf("주연 : ");
fgets(pDVD[i].pActor,60,stdin);
printf("상영시간 : ");
scanf("%d", &pDVD[i].nRunningtime);
printf("대여료 : ");
scanf("%d", &pDVD[i].nRentprice);

printf("\n");
}
}
else if(nMenu == DELETE)
{
printf("바코드 : ");
scanf("%d", &nBarcode);
printf("\n");

if(nBarcode == 0)
continue;

for(i=0;i<20;i++)
if(pDVD[i].nBarcode==nBarcode)
break;

if(i!=20)
pDVD[i].nBarcode=0;
}
else if(nMenu == QUIT)
{
break;
}
}
return 0;
}
