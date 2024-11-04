#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);	
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	return 0;
//}
//函数可以嵌套调用，但是不能嵌套定义。
//函数的地位都是平等的，不能在内部创建函数。
//链式访问
//strlen返回的是size_t类型，即无符号整型
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//这两种方法都可行。
//	return 0;
//}链式访问的前提条件是函数有返回值
//int main(void)的写法是声明不要给main函数传参数
//int main(int argc[], char argv[], char* envp[])是main函数的三个参数
//{
//
//	return 0;
//}
//如果想把函数定义在主函数后，需要先进行函数的声明
//#pragma comment(lib,"add.lib")可以引用买来的头文件和静态库
//%u 会打印无符号整数%d会打印有符号的整数
//递归不是死递归，需要停下来的条件：
// 1.存在限制条件，达到条件之后递归便不再继续
// 2.越来越接近限制条件
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n = 7;
    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}