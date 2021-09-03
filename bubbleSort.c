#include <stdio.h>

// 버블정렬 7,4,1,5,2

void bubbleSort(arr[])
{
	int temp;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j]

int main()
{
	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);	//배열 arr의 i번째까지 원소를 입력 받는다.
	}

	bubbleSort(arr[]);	//비교할 주소값 두개를 넣고 버블정렬함수를 수행한다.

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

