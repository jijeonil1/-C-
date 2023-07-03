#include<stdio.h>
int main(){
int P1[2][5] = {0,1,2,3,4,5,6,7,8,9};
char P2[3][7] = {"hello", "book", "NO WAR"};

for(int i=0;i<2;i++)
for(int j=0;j<5;j++)
printf("P1[%d][%d] = %d\n", i, j, P1[i][j]);

printf("\n\n");
for(int i=0;i<3;i++)
for(int j=0;j<7;j++)
printf("P2[%d][%d] = %c\n", i, j, P2[i][j]);

}
