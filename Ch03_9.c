#include<stdio.h>

int main(){
char ch = 'A';
int N=0;
float flt=0.0;
double dbl=0.0;

printf("type	size\n");
printf("--------------\n");
printf("char	%lu\n", sizeof(ch));
printf("int	%lu\n", sizeof(N));
printf("float    %lu\n", sizeof(flt));
printf("double    %lu\n", sizeof(dbl));

return 0;

}
