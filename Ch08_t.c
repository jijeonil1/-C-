#include<stdio.h>
#include<string.h>
void printAll(int* pArr, int len)//배열을 받아 원하는 길이만큼 출려하는 함수
{
for (int i = 0; i < len; ++i)
{
printf("%d ", *(pArr + i));// *(pArr + i)==pArr[i]
}
 
printf("\n\n");
}
 
int main(void)
{
// 배열 초기화 for 문 이용
int arr1[20];
for (int i = 0; i < 20; ++i)
{
arr1[i] = 0;
}
 
printf("for    : ");
printAll(arr1, 20);
 
 
// 배열 초기화 memset 함수이용
int arr2[20];
memset(arr2, 0, 20 * sizeof(int));
 
printf("memset : ");
printAll(arr2, 20);

return 0;
}
