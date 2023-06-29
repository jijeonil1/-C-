#include<stdio.h>

int main(){
int N1,N2,N3,N4=0;

printf("정수(4개) : ");
scanf("%d %d %d %d", &N1, &N2, &N3, &N4);

printf("\n");
printf("%04d \t * %4d*\n", N1, N1);
printf("%04d \t * %4d*\n",N2,N2);
printf("%04d \t * %4d*\n", N3, N3);
printf("%04d \t * %4d*\n", N4, N4);

return 0;
}
