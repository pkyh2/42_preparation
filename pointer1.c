#include <stdio.h>

int main()
{
	//int *p = NULL;	//포인터 변수 p에 NULL값을 대입
	int num = 15;	//정수형 변수 num에 정수값 15를 대입
	int *p = &num;

	//p = &num;	//포인터 p에 정수형 변수 num의 주소값을 대입

	printf("int 변수 num의 주소: %d\n", &num);
	printf("포인터 p의 값: %d\n", p);
	printf("포인터 p가 가리키는 값 : %d\n", *p);

	return 0;
}
