#include<stdio.h>
#include<stdlib.h>
struct MEMBER{
char* pName;
char* pAddress;
int nAge;
int nSex;
}; //pName과 pAddress는 포인터 변수이기에 메모리를 가지고 지않다. 그래서 메인함수에서 구조체 선언시 동적으로 메모리를 할당 해주어야 한다.
int main(){
struct MEMBER AS;
AS.pName = (char*)malloc(20);
free(AS.pName);

}
