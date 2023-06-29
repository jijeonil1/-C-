#include<stdio.h>
#include<limits.h>

int main(){

printf("type	min	max\n");
printf("--------------------\n");
printf("char	%12d	\t %12d\n", SCHAR_MIN, SCHAR_MAX);
printf("short    %12d    \t %12d\n", SHRT_MIN, SHRT_MAX);
printf("int    %12d    \t %12d\n", INT_MIN, INT_MAX);
printf("long    %12ld    \t %12ld\n", LONG_MIN, __LONG_MAX__);

return 0;

}
