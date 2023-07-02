//사용자로부터 입력받은 문자열의 길이가 얼마인지 출력하는 코드
#include<stdio.h>
int main(){
    int i;
    char* ptr;
    char szBuffer[100];
    
    printf("문자열 입력 : ");
    scanf("%s",szBuffer);//&를 안써도 되는 이유는 배열의 이름 자체가 주소라는 의미
    
    //첫번째 방법 
    for(i=0;szBuffer[i] !='\0';i++)//널문자가 나오기 전까지 출력
    ;//예전에 NUM셀때 코드와 비교하면 매우간편함
    printf("\n첫번째 : %d", i);
    //두번째방법
    ptr = szBuffer;//ptr이 szBuffer의 값을 포인터로 연결
    while(*ptr)//NULL이면 0이니까 반복 멈춤
    ptr++; // ptr의 주소가 하나씩 증가--> 첫번째에는 ptr에 모든 문자 담겨있고 증가할 수록 ptr의 """주소"""가 증가하여 그다음의 문자 부터 값을 담게 된다.
    printf("\n두번쨰 방법 : %ld\n", ptr-szBuffer);//ptr-szBuffer를 한이유는? szbuffer는 szBuffer의 0번쨰인자가 담긴 값의 주소를 가지고 있기에 ptr이 증가함으로써 증가령을 출력한것 
    printf("ptr을 출력하면?: %d", *ptr);
    
    return 0;
}
