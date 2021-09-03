#include <stdio.h>

void swap(int *a, int *b)	// 매개변수로 int형 포인터 변수를 받는다.
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;

	a = 10;
	b = 20;

	printf("swap 전 : %d %d\n", a, b);
	
	swap(&a, &b);	//함수의 인자로 변수의 주소값을 넣어준다.

	printf("swap 후 : %d %d\n", a, b);

	return 0;
}

