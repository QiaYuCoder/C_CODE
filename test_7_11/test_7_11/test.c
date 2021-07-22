#include <stdio.h>
#include <string.h>
#include <limits.h>    //关于int和float的大小限制信息
int main()
{
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//printf("%p\n", &a);
	//printf("%p\n", p); 
	//printf("%d\n", a);
	//return 0;

	//指针变量的大小
	//指针变量用来存地址 所以占用大小在win32是4个字节 x64是8
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	//都是4
	return 0;
	
}



////static修饰函数
//extern Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n",sum);
//}



//int main()
//{
//	extern int g_val;	
//	//当static修饰另一源文件中全局变量时改变了全局变量的作用域
//	//让静态全局变量只能在自己所在的源文件内部使用
//	//出源文件就没法使用
//	printf("%d\n", g_val); 

//	return 0;
//}




////static修饰局部变量生命周期变长
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);  // 2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i++ < 5)
//	{
//		test();
//	}
//	return 0;
//}




//关于局部变量作用域
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i++ < 5)
//	{
//		test();
//	}
//	return 0;
//}



////printf的返回值是打印字符的各数(包括空格和换行符)
////scanf返回值为读取成功的项数
//int main()
//{
//	int bph2o = 212;
//	int rv;
//
//	rv = printf("%d F is water's boiling point.\n",bph2o);
//	//打印改行字符串的同时返回字符各数
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}




////关于参数传递的问题
//int main()
//{
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//
//	printf("%.1e %.1e %.1e %.1e\n", n1,n2, n3, n4);
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//	//n1 n2 n3 n4在作为实参在传递参数时首先进行压栈开辟空间，调用函数时再从中获取参数
//	return 0;
//}



//int main()
//{
//	printf("%x %X %#x\n", 30, 30, 30);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	//% d 若d为正则显示空格 为负显示-
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);  //整形中.数字表精度最小位数
//	//在0标记中出现- 或者指定精度忽略该0标记
//	return 0;
//}



//int main()
//{
//	const double RENT=3852.99;
//	
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3e*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);		//显示正负 若位为-4.2f 是左对齐
//	printf("*%010.2f*\n", RENT);	//以0代表前导空格
//	return 0;
//}



//#define PRAISE "You are extraordinary being."
//int main()
//{
//	char name[40];
//
//	printf("What's your name? ");
//	scanf("%s", name); //数组名即为首元素地址不加& scanf的格式化输入字符串(只读取其中一个单词)
//	printf("hello. %s. %s\n", name, PRAISE);
//	return 0;
//}



////转义字符示例
//int main()
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\t$%.2f a month is %.2f a year.", salary, salary * 12);
//	printf("\rGee!\n"); //回车符移动光标到本行最前
//	return 0;
//}



//int main()
//{
//	//转义序列即转义字符 赋给字符变量时即为字符常量要用单引号引起来
//	//但在字符串中不用加 类比普通字符
//	char beep = '\007';
//	printf("hello!\007\n");
//		return 0;
//} 



//int main()
//{
//	//转换说明待打印值不同
//	unsigned un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un=%u and not %d\n", un, un); 
//	printf("end=%hd and %d\n", end,end);  //整形提升
//	printf("bit=%ld and not %hd\n", big, big); //截断(取余65537%65536即为%hd)
//	printf("verybig=%lld and not %ld\n", verybig, verybig); //截断
//
//	//验证截断的算法
//	printf("%d\n", big % 65536);   
//	return 0;
//}




//int main()
//{
//	//int x = 100;
//	//printf("%d %#o %#x\n", x, x, x);  //八进制前缀为0  八进制十进制均为整形
//	
//
//	//整数溢出   超出范围则转圈
//	int i = 2147483647;
//	unsigned  j = 4294967295;
//	long k = 65536;
//	
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//	printf("%ld %#lx %#lo\n", k, k, k);    //#是在%和转化说明之间
//	return 0;
//}




//int main()
//{
//	float weight, value;
//
//	//用空行隔开变量声明与其他部分 增加可读性
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	scanf("%f", &weight);
//
//	return 0;
//}
//



//int main()
//{
//	//a和b的关键字类型是一样的
//	unsigned a = 65536;
//	typedef unsigned us_32;
//	us_32 b = 65536;
//	return 0;
//}



//int main()
//{
//	register int a = 10;
//	//有大量变量频繁使用时让cpu获取速度更快时
//	//建议把a定义成寄存器变量  是否存入取决于编译器
//	printf("%d\n", a);
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//三元条件运算符
//	int max = a > b ? a : b;    
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{	
//	//遍历数组中元素
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



//int main()
//{	
//	//计算数组中元素个数
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof arr / sizeof arr[0];
//	printf("sz=%d\n", sz);
//	return 0;
//}



//int main()
//{
//	//整形以补码形式存储 
//
//	int a = 20;   //正数原返补相同直接打印
//	//0000 0000 0000 0000 0000 0000 0001 0100  
//	//0x00000014 存储形式  计算机中是小端存储即显示为 14000000
//
//	int b = -10;
//	//负数考虑原反补
//	//1000 0000 0000 0000 0000 0000 0000 1010   原码
//	//1111 1111 1111 1111 1111 1111 1111 0101   反码
//	//1111 1111 1111 1111 1111 1111 1111 0110   补码
//	//0xfffffff6
//
//	b = b >> 1;   //算数右移 右边丢弃左边补原符号位 逻辑右移 右边丢弃 左边补0
//	//1111 1111 1111 1111 1111 1111 1111 1011   右移后补码
//	//0xfffffffb  
//	//1111 1111 1111 1111 1111 1111 1111 1010   右移后反码
//	//1000 0000 0000 0000 0000 0000 0000 0101   右移后原码(打印-5) 
//
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("abcdef"));   //输出6
//	// \32被解析成一个八进制下的转义字符所代表的十进制下数字作为ASCII码值所对应的字符
//	printf("%d\n", strlen("c:\test\328\test.c"));  
//	//输出14 \t也是一个字符 \328中8不与\结合 (八进制0~7)
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	char arr4[] = { '\0' ,'b', 'i', 't', }; 
//	printf("%s %s %s %s\n", arr1, arr2, arr3,arr4);  //arr4直接结束不打印
//	printf("%d\n", strlen(arr1));  //strlen求字符串长度既然'\0'是结束标志就不计算
//	printf("%d\n", strlen(arr2));  //strlen是函数调用时要用() 随机值
//	return 0;
//}



//#include <stdio.h>
//int global = 2019; //全局变量
//int main()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global=%d\n", global);  //局部变量优先使用显示2020
//	return 0;
//}



//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？(选择1 or 0):>");
//	scanf("%d", &coding);
//	if (1 == coding)
//		printf("坚持，会有好offer\n");
//	else
//		printf("放弃，回家卖红薯\n");
//	return 0;
//}



//int main()
//{
//	//计算两时间之差
//	int hour1, minute1;
//	int hour2, minute2;
//	printf("输入两个时间>:");
//	scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);
//	int minutes1 = hour1 * 60 + minute1;
//	int minutes2 = hour2 * 60 + minute2;
//	int t = minutes1 - minutes2;  //用变量储存所作差更方便后续操作
//	printf("时间差是%d小时%d分\n",t /60, t  % 60);
//	return 0;
//}