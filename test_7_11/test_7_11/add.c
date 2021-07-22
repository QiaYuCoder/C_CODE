 //static int g_val = 2021;

//定义一个外部函数
//当用static修饰外部函数时改变了函数的作用域-不准确
//外部链接属性->内部链接属性
static int Add(int a, int b)
{
	int z = a + b;
	return z;
}