#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = -20;
	//10000000000000000000000000010100
	//11111111111111111111111111101011
	//11111111111111111111111111101100
	//00000000000000000000000000001010
	//11111111111111111111111111110110-补码
	//10000000000000000000000000001001
	//10000000000000000000000000001010
	//-10
	unsigned int j = 10;
	//00000000000000000000000000001010

	printf("%d\n", i + j);//-10
}


//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);//打印无符号整形
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	//100000000000000000000000000000000
//	printf("%u\n", a);//打印无符号整形
//
//	return 0;
//}


//
//int main()
//{
//	char a = -1;
//	//11111111111111111111111111111111
//	//11111111111111111111111111111111
//	//10000000000000000000000000000000
//	//10000000000000000000000000000001  -1
//	//
//	signed char b = -1;
//	//11111111111111111111111111111111
//	//10000000000000000000000000000000
//	//10000000000000000000000000000001
//	//
//	unsigned char c = -1;
//	//00000000000000000000000011111111
//	//
//	//%d
//	//整形提升
//	//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//-1 -1 255
//	return 0;
//}

//
//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//
//
////int check_sys()
////{
////	int a = 1;
////	char*p = (char*)&a;
////	if (*p == 1)
////		return 1;//小端
////	else
////		return 0;//大端
////}
//
//int main()
//{
//	//写一个代码，告诉我们，当前机器是采用大端还是小端？
//	int a = 1;
//	//写一下代码
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//char* p = (char*)&a;//int*
//	//if (*p == 1)
//	//{
//	//	printf("小端\n");
//	//}
//	//else
//	//{
//	//	printf("大端\n");
//	//}
//
//	//
//	//0x 00 00 00 01
//	//
//	//低           高
//	//小端
//	//01 00 00 00
//	//大端
//	//00 00 00 01
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0x11223344;//b占个字节
//	//
//	//大端字节序存储
//	//
//	//小端字节序存储
//	//
//	//11 22 33 44
//	//44 33 22 11
//	//
//	//11 33 22 44
//	//11 44 22 33
//	//...
//	//
//	//大小端字节序
//
//	return 0;
//}
//原码 - 有符号数，直接根据正负数值给出二进制序列就是原码
//反码 - 原码的符号位不变，其他为按位取反
//补码 - 反码二进制的最低位+1得到

//正数的原码、反码、补码相同
//0 1 2 3 4 5 6 7 8 9 a b c d e f
//1111
//8+4+2+1 = 15
//
//int main()
//{
//	int c = 1 - 1;
//	//
//	//CPU 加法器
//	//1-1
//	//1+(-1)
//	//00000000000000000000000000000001
//    //11111111111111111111111111111111
//	//00000000000000000000000000000000
//
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	//-2
//
//
//	//int a = 3;//signed int a = 3;
//	//int b = -1;
//
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//10000000000000000000000000000000
//	//10000000000000000000000000000001 - 原码
//	//FFFFFFFF
//
//	//00000000000000000000000000000011 - 原码
//	//00000000000000000000000000000011 - 反码
//	//0000 0000 0000 0000 0000 0000 0000 0011 - 补码
//	//0    0    0    0    0    0    0    3
//	//00 00 00 03
//
//	return 0;
//}

//int main()
//{
//	int c = 0x11223344;//
//	int a = 3;
//	int b = -1;
//
//	return 0;
//}
//
//
//void test(void)
//{
//
//}
//int main()
//{
//	int a;
//	int arr[10];//10个整形的数组
//	char ch1[5];//5个字符的数组
//	char ch2[4];
//	return 0;
//}

//int main()
//{
//	char c = 'w';//char 到底是signed char 还是unsigned char是不确定的，取决于编译器的实现
//	//signed //有符号的
//	signed char ch = 'w';//
//	unsigned char c2 = 't';
//
//	short int a = 10;
//	short b = 20;//short 是 signed short
//
//	signed short c = 30;//[][][][][][][][][][][][][][][][]
//	unsigned short d = 40;//[][][][][][][][][][][][][][][][]
//
//	int e = 0;
//	signed int f = 0;
//	unsigned int g = 0;
//
//	return 0;
//}
////
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	printf("&i = %p\n", &i);
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i,  &arr[i]);
//	}
//
//	/*for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//	//让代码走到这里暂停
//	system("pause");
//
//	return 0;
//}

