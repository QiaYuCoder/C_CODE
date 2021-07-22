#include <stdio.h>
#include <string.h>
//结构体传参时要传结构体地址
typedef struct Stu
{
	char name[40];
	short age;
	char tele[12];
	char sex[5];
}Stu;	

void print1(Stu tmp)
{
	printf("%s\n", tmp.name); 
	printf("%hd\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.sex);
}

//传址最多每次传8个字节 传参时实参要压栈 形参是实参的临时拷贝
//若结构体太大参数压栈的系统开销大 会导致性能下降
void print2(Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%hd\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);

}

int main()
{
	Stu s = { "李四", 20, "123456789", "男" };
	print1(s);
	print2(&s);
	return 0;
}



////结构体嵌套
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{	
//	char arr[] = "hello bit";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%f\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}




//结构体->复杂对象->我们自己创造出的一种类型

//创建一个结构体类型(放在主函数外作为全局变量类型随处可使用) 
//此时不开辟存储空间 只有创建结构体变量时才会
//struct Book
//{
//	char name[40]; //C程序设计
//	short price;	//55
//};					//分号用于结束此类型定义必不可少
//
//struct Stu
//{
//	char name[40];
//	short age;
//	int tall;
//	char tele[12];
//	char sex[5];
//	
//}s1,s2,s3;			//此时创建结构体类型后直接定义三个全局变量(在main之外) 一般不用
//
//
//int main()
//{
//	s1.age = 25;
//	strcpy(s1.name, "JAVA");
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	//只有在初始化变量时才能用={}
//	 //s1 ={"QiaYuCoder", 23, 172.2, "18808235044", "男" }; 
//
//
//	//利用自身所创建的结构体类型来创建该类型的结构体变量
//	struct Book b1 = { "C语言程序设计", 55 };
//	//拿出其中成员变量方法一	
//	printf("书名:%s\n", b1.name);
//	printf("价格:%hd元\n", b1.price);
//	b1.price = 15;		//price是变量可直赋值
//	//b1.name = "C++";	name是首元素地址不能赋除地址外的值
//	strcpy(b1.name, "C++");
//
//
//	printf("修改后的价格为%hd元\n", b1.price);
//	printf("%s\n", b1.name);
//
//	//拿出其中成员方法二(指针)
//	struct Book* b2 = &b1;
//	printf("%s\n", (*b2).name);
//	printf("%hd\n", (*b2).price);
//
//	//拿出其中成员方法三(指针)
//	printf("%s\n", b2->name);
//	printf("%hd\n", b2->price);
//
//	return 0;
//}