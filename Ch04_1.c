#include<stdio.h>

int main(){
int nSalary =25, nAdd = 5;
int nTotal =0;

printf("연수\t 연봉 \t 합계 \n");
printf("-------------------------\n");

nSalary += nAdd;
nTotal += nSalary;
printf("1	\t %d	\t %d	\n",nSalary,nTotal);

nSalary+=nAdd;
nTotal +=nSalary;
printf("2	\t %d	\t %d	\n", nSalary, nTotal);

nSalary+=nAdd;
nTotal +=nSalary;
printf("3       \t %d   \t %d   \n", nSalary, nTotal);

nSalary+=nAdd;
nTotal +=nSalary;
printf("4       \t %d   \t %d   \n", nSalary, nTotal);

nSalary+=nAdd;
nTotal +=nSalary;
printf("5       \t %d   \t %d   \n", nSalary, nTotal);

return 0;
}
