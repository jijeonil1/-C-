#include<stdio.h>
int main(){

int N1,N2,N3,N4,N5,N6=0;

printf("정수 입력(6개) : ");
scanf("%d %d %d %d %d %d", &N1, &N2, &N3, &N4, &N5, &N6);

printf("\n");
printf("%10d %10d %10d", N1, N2, N3);
printf("%10d %10d %10d", N4, N5, N6);

printf("\n");
printf("%d \t %d \t %d\n", N1, N2, N3);
printf("%d \t %d \t %d\n", N4, N5, N6);

return 0;
}
