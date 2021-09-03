#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	double arr2[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	int *arrPtr = arr;
	double *arrPtr2 = arr2;

	printf("포인터 주소 : %d %d\n", arrPtr++, arrPtr2++);	//주소값에 ++해준다 int형은 4만큼, double는 8만큼 주소값이 증가한다.
	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
	printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);	//포인터 변수*arrPtr이 가리키는 값 arr, arr2의 첫번째 원소값에 1을 더한 값이 아니라 배열은 연속된 주소의 모음이니까 배열의 주소값이 1증가하면 출력값은 그 다음 주소가 가리키는 값인 arr, arr2의 두번째 원소가 출력된다.

	arrPtr += 2;	//주소값에 2를 증가시킨다
	arrPtr2 += 2;

	printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
	printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);	//증가된 주소값이 가리키는 값은 그 배열의 다음 원소 값이된다.

	printf("포인터가 가리키는 값 *arrPtr, *arrPtr2의 크기 : %d %d\n", sizeof(*arrPtr), sizeof(*arrPtr2));
	printf("포인터 arrPtr, arrPtr2의 크기 : %d %d\n", sizeof(arrPtr), sizeof(arrPtr2));

	return 0;
}
