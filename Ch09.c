//스왑함수 포인터를 이용하여 함수가 끝나도 변수의 변한값이 그대로 남을수 있음
#include<stdio.h>
void Swap(int *pN, int *pM);

int main(){

int N,M;

printf("2개의 정수 입력");
scanf("%d %d", &N, &M);

Swap(&N,&M);

printf("N : %d, M : %d", N, M);

return 0;

}

void Swap(int* pN, int* pM){
int Temp;

Temp = *pN;
*pN = *pM;
*pM = Temp;

}
