#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void rank(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for(j=0;j<sz-1-i;j++)
		if (arr[j] > arr[j + 1])
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;

		}
	}

}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	rank(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}