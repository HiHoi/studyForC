//func1( )은 정수 1을 전달하는 함수이고, func2( )는 문자 a를 전달하는 함수입니다. 
//또 func3( )은 호출 즉시 무조건 “hello”를 출력하는 함수입니다. 
//마지막으로 func4( )는 main( ) 함수로부터 실수를 입력받아서 저장하고 그 값을 즉시 출력하는 함수입니다.



#include <stdio.h>

int func1(void);
char func2(void);
void func3(void);
void func4(float x);

int main()
{
    int a;
    char b;
    float c;

    a = func1();
    b = func2();

    printf("func1에 입력된 수는 %d입니다.\n", a);
    printf("func2에 적힌 문자는 %c입니다.\n", b);

    func3();
    
    printf("func3에서 보일 수를 입력하시오:");
    scanf("%f" ,&c);
    
    func4(c);
}

int func1(void)
{
    return 1;
}

char func2(void)
{
    return 'a';
}

void func3()
{
    printf("hello\n");
}

void func4(float x)
{
    printf("main함수에서 받은 수는 %f입니다.\n", x);
}