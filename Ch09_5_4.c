#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* backward(char* a);

int main() {
char *a = NULL;
size_t size = 0;

printf("문자열을 입력: ");
getline(&a, &size, stdin);

a=backward(a);
printf("거꾸로: %s", a);


free(a);
return 0;
}

char* backward(char* a){

char b[256];
char* ptr1 = a, *ptr2 = b;

while(*ptr1)
*ptr2++ = *ptr1++;
ptr2--;

ptr1=a;
while(ptr2>=b)
*ptr1++ = *ptr2--;

return a;

}
