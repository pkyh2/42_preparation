#include <stdio.h>

void pointerPlus(int *num)	//인자로 포인터 변수를 받음
{
	*num += 5;		//포인터가 가리키는 값에 5를 더해준다.
}

void numPlus(int num)		//인자로 int형 변수를 받음
{
	num += 5;		//int형 변수 num에 5를 더한다.
}

int numPlus2(int num)
{
	num += 5;
}


int main()
{
	int num = 15;
	printf("num 값 : %d\n", num);			//num값 15출력

	numPlus(num);
	printf("numPlus 사용 후 : %d\n", num);		//numPlus에 인자값으로 int형변수 num을 넣어준다.
	numPlus2(num);
	printf("numPlus2 사용 후 : %d\n", num);

	pointerPlus(&num);
	printf("pointerPlus 사용 후 : %d\n", num);	//pointerPlus에 인자값으로 num변수의 주소값을 인자로 넣어준다.

	return 0;
}



