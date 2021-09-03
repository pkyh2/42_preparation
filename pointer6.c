#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};	//크기가 5인 int형 배열 선언
	int *arrPtr = arr;			//포인터 변수*arrPtr을 선언후 배열이름을 대입 

	printf("%d\n", *arrPtr);		//포인터 변수 *arrPtr가 가리키는 값이 10인걸로 보아 배열이름 arr은 배열arr의 첫번째 요소의 주소값을 나타낸다.
	printf("%d\n", arr[0]);

	return 0;
}

