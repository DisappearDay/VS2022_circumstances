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
//�ó������ѭ����ԭ���ǣ�main�����ڲ�������i��arr�����ֲ��������ֲ������Ǵ����ջ����
//��ջ��Ĭ��ʹ������ʹ�øߵ�ַ����ʹ�õ͵�ַ���������������±�����󣬵�ַ�𽥱��ģ�
//��ˣ�������һ���̶ȵ�Խ��ʱ�����п�����Խ�����������i�����Ҹı�i��ֵ�����³�����ѭ����
//��VC6.0���뻷����  С�ڵ���10����ѭ����
//��gcc ������   С�ڵ���11����ѭ��
//��VS2013   С�ڵ���12��ѭ��




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
//	//�жϴ�������ָ���Ƿ���Ч
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
//	//�ȼ�����ĵݹ飬\0��asc��ֵ��0������whileѭ������ͣ����
//		while (*dest++ = *src++) {
//			;
//		}
//
//	}
//	
//}


//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	//�����if���ȥ�ж��Ļ�����������ķ��������ʱ�򣬸ó���������ȥ�ˣ���ִ�У����������Ƿ��ִ���
//	assert(dest != NULL);//����
//	assert(src!= NULL);//����
//	//��srcָ����ַ���������dest�Ŀռ��У�������\0��
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
//	//������ʱ��\0Ҳ�´����ȥ������\0�ͽ����ˣ������������
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//�Ѻ����ķ���ֵ����Ϊ��һ�������Ĳ���-----��ʽ����
//	return 0;
//}


//int main() {
//	const int num = 10;
//	//const int* p = &num;//const����ָ�������*���ʱ�����ε���*p���� ����ͨ��p���ı�*p��num����ֵ��
//	//*p = 20;
//	int* const p = &num;//const����ָ�������*�ұ�ʱ�����ε���ָ���������p���ܱ��ı�
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}


//���ַ�������
int my_strlen(const char* str) {
	assert(str!=NULL);//��ָ֤�����Ч��
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
