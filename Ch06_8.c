#include<stdio.h>
int main(){
int N=0,i;
for(i =1;i<=100;i++)
N+=i;
printf("%d\n",N);

N=0,i=1;
while(i<=100){
N+=i;
i++;
}
printf("%d\n",N);

}
