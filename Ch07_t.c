#include <stdio.h>
#include<stdlib.h>//malloc사용가능
int main()
{
    //크기가 7인 1차원 int 배열로 구성된 2차원 배열을 가리키는 포인터 변수 선언 
    int(*pDynamic)[7];
    int i,j;
    
    pDynamic = (int (*)[7])malloc(5*7*sizeof(int));//동적 메모리 할당
    
    for(i=0;i<5;i++)
    for(j=0;j<7;j++)
        pDynamic[i][j]=i*7+j;
    
    for(i=0;i<5;i++)
    {
    for(j=0;j<7;j++)
    printf("%d\t",pDynamic[i][j]);
    printf("\n");
    }
    free(pDynamic);
    return 0;
}
