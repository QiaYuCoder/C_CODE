#include <stdio.h>
#include <string.h>
//两大分支(if switch) 三大循环(while for do while)
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d ", i++);
//	} while (i <= 10);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int k = 0;
//	
//	for ( i = 0,k=0; k=0; i++,k++) //测试部分是赋值为假循环0次
//	{
//		k++;
//	}
//	return 0;
//}




//int main()
//{
//	//for测试部分省略恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	//用for循环尽量采用前闭后开
//	int digital[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//
//	//前闭后开的实际意义
//	//10个元素
//	//10次循环
//	//10次打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", digital[i]);
//	}
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	//不可在for循环体内改变循环变量，防止for循环失去控制
//	int i = 0;

//	for ( i = 0; i <10; i++)
//	{
//		if (i = 5)			//改变循环变量导致死循环
//			printf("haha\n");
//		printf("hehe\n");  //
//	}
//	return 0;
//}



//int main()
//{
//	//continue在for循环中终止本次循环后先更新再进入下次循环
//	int i = 0;

//	for ( i = 1; i <=10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()
//{
//	char ret;
//	char password[20] = { 0 };
//
//	printf("请输入密码:> ");
//	scanf("%s", password);
//	printf("请确认(Y/N):>");
//	while ((getchar()) != '\n')  //当输入123456 ABCDEF时用于读取 ABCDEF'\n'并舍去 达到请空缓冲区的作用
//		;						//!='\n'即还未读完
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}




//int main()
//{
//	char ret;
//	char password[20] = {0};
//
//	printf("请输入密码:> ");
//	scanf("%s", password);
//	printf("请确认(Y/N):>");
//	getchar();			//当输入123456时用于读取上一次缓冲区中的\n
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}



//int main()
//{
//	char ch = 0;

//	//end of file 文件结束标志-> -1 
//	//按键为ctrl+z
//	//该循环读取字符可用于清空缓冲区
//	while ((ch=getchar())!=EOF)  //每次只读取一个字符 空格回车也会被读取(\n)
//	{
//		putchar(ch);			//每次只输出一个字符
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekdays\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekends\n");
//			break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);

//	switch (day)   //括号中是整形表达式
//	{
//	case 1:			//case后为整形常量表达式 变量不可行
//		printf("星期1\n");
//		break;		//在switch中无法直接实现分支 要搭配break才能实现真正的分支
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}



////判断一个数是否为奇数
//int main()	
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (0 == i % 2)
//	{
//		printf("偶数\n");
//	}
//	else
//		printf("奇数\n");
//	return 0;
//}



//输出1—100之间的奇数
//int main()
//{
//	////法一
//	//int i = 0;
//	//for ( i = 1; i <=100; i++)
//	//{
//	//	if (i % 2 != 0)
//	//		printf("%d ", i);
//	//}
//	//printf("\n");
//
//	////法二
//	//int i = 1;
//	//while (i<=100)
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//	//printf("\n");
//	//return 0;
//
//	//法三
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;	//不管是不是奇数都要遍历完全
//	}
//}



//int main()
//{
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age<18)
//	//{
//	//	printf("未成年\n");
//	//}
//	//else if (18 <= age && age < 30)
//	//{
//	//	printf("青年\n");
//	//}
//	//else if (30 <= age && age < 50)
//	//	printf("壮年\n");
//	//else
//	//	printf("老年\n");
//
//	//悬空else问题：else与最近的if相匹配
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//		//下面的if相当于一条语句 是一个块 
//		//输出结果什么都没有 不进入第一个if
//	return 0;
//}