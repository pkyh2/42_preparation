#include <stdio.h>

int main()
{
	int *p = NULL;	//int형 포인터p에 NULL값 대입
	int num = 15;

	p = &num;	//포인터 변수에 변수num의 주소값 대입

	printf("포인터 p의 값 : %d\n", p);
	printf("int 변수 num의 주소 : %d\n", &num);

	return 0;
}
