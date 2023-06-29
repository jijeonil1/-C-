#include<stdio.h>
int main(){
printf("type	size\n");
printf("--------------\n");
printf("char	%lu\n", sizeof(char));
printf("int	%lu\n", sizeof(int));
printf("float	%lu\n", sizeof(float));
printf("double	%lu\n", sizeof(double));

return 0;
}
