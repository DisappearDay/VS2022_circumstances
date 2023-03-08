#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//int main() {
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (i = 0; i <= 15;i++) {
//	//	printf("hehe\n");
//	//	arr[i] = 0;
//	//}
//	printf("%p\n", &i);
//	printf("%p",arr);
//	return 0;
//}
//该程序会死循环的原因是，main函数内部创建了i和arr两个局部变量，局部变量是存放在栈区的
//而栈的默认使用是先使用高地址，在使用低地址，而数组是随着下标的增大，地址逐渐变大的，
//因此，当数组一定程度的越界时，就有可能在越界过程中遇到i，并且改变i的值，导致程序死循环。
//在VC6.0编译环境下  小于等于10就死循环了
//在gcc 环境下   小于等于11就死循环
//在VS2013   小于等于12死循环




//int main() {
//	int i = 0;
//	int n = 0;
//	int reg = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++) {
//		int j = 0;
//		for (j = 1; j <= i;j++) {
//			reg *= j;
//		}
//		sum += reg;
//		reg = 1;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//
//void my_strcpy(char* dest,char* src) {
//	
//	
//	
//	//判断传进来的指针是否有效
//	if (dest != NULL&&src!=NULL) {
//
//		/**dest = *src;
//	dest++;
//	src++;
//	if (*src != '\0') {
//		my_strcpy(dest, src);
//	}
//	*dest = *src;*/
//
//
//	//等价上面的递归，\0的asc码值是0，所以while循环可以停下来
//		while (*dest++ = *src++) {
//			;
//		}
//
//	}
//	
//}


//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	//如果用if语句去判定的话，当代码真的发生错误的时候，该程序是跳过去了，不执行，不利于我们发现错误
//	assert(dest != NULL);//断言
//	assert(src!= NULL);//断言
//	//把src指向的字符串拷贝到dest的空间中，包含‘\0’
//	while (*dest++ = *src++) {
//				;
//			}
//	return ret;
//}
//
//
//int main() {
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	//拷贝的时候\0也会拷贝过去，遇到\0就结束了，不会继续拷贝
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//把函数的返回值，作为另一个函数的参数-----链式访问
//	return 0;
//}


//int main() {
//	const int num = 10;
//	//const int* p = &num;//const放在指针变量的*左边时，修饰的是*p；即 不能通过p来改变*p（num）的值；
//	//*p = 20;
//	int* const p = &num;//const放在指针变量的*右边时，修饰的是指针变量本身，p不能被改变
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}


//求字符串长度
int my_strlen(const char* str) {
	assert(str!=NULL);//保证指针的有效性
	int count = 0;
	while (*str++) {
		count++;
	}

	return count;
}



int main() {
	char arr[] = "asedfgg";
	printf("%d\n", my_strlen(arr));
	return 0;
}
