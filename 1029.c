#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	//在一个有序数组中查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//		return 0;
//}
//当为有序数组时，有优解“折半查找法（二分查找法）”：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	//在一个有序数组中查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	 int left = 0;
//	int right = sz - 1;//注意-1
//	while (left <= right)
//	{
//		//可优化 int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == k)//注意是==
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to Valorant!";
	char arr2[] = "                    ";
	int left = 0;
	int right = strlen(arr2) - 1;//int right =sizeof(arr)/sizeof(arr[0])-2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		right--;
		
	}
	printf("%s\n", arr2);
	return 0;
}