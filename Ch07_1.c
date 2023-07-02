#include<stdio.h>
int main(){
//1_4
char ch;
char* a;
int* b,d[5];//int* d[5]는 20바이트 : d는 포인터가 아닌 배열
int** c;
int(* p3)[5];//2차원 포인터, (int 자료형 5개를 모아논 1차원 배열로 구성된 배열을 가리키는 포인터)

printf("%lu\n",sizeof(ch));
printf("%lu\n",sizeof(a));
printf("%lu\n",sizeof(b));
printf("%lu\n",sizeof(d));
printf("%lu\n",sizeof(c));
printf("%lu\n",sizeof(p3));


//포인터의 크기는 몇bit의 운영체제에서 몇bit로 컴파일 했는지에 따라 다르게 나온다. OS_64bit-->complie_64bit == 포인터 8바이트 OS_64bit-->compile_32bit == 포인터4바이트, 그외에도 2바이트가 나올 수도 있음 -->OS에만 영향을 받는것이 아님
return 0;

}
