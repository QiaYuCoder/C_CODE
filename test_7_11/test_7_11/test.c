#include <stdio.h>
#include <string.h>
#include <limits.h>    //����int��float�Ĵ�С������Ϣ
int main()
{
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//printf("%p\n", &a);
	//printf("%p\n", p); 
	//printf("%d\n", a);
	//return 0;

	//ָ������Ĵ�С
	//ָ������������ַ ����ռ�ô�С��win32��4���ֽ� x64��8
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	//����4
	return 0;
	
}



////static���κ���
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
//	//��static������һԴ�ļ���ȫ�ֱ���ʱ�ı���ȫ�ֱ�����������
//	//�þ�̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	//��Դ�ļ���û��ʹ��
//	printf("%d\n", g_val); 

//	return 0;
//}




////static���ξֲ������������ڱ䳤
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




//���ھֲ�����������
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



////printf�ķ���ֵ�Ǵ�ӡ�ַ��ĸ���(�����ո�ͻ��з�)
////scanf����ֵΪ��ȡ�ɹ�������
//int main()
//{
//	int bph2o = 212;
//	int rv;
//
//	rv = printf("%d F is water's boiling point.\n",bph2o);
//	//��ӡ�����ַ�����ͬʱ�����ַ�����
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}




////���ڲ������ݵ�����
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
//	//n1 n2 n3 n4����Ϊʵ���ڴ��ݲ���ʱ���Ƚ���ѹջ���ٿռ䣬���ú���ʱ�ٴ��л�ȡ����
//	return 0;
//}



//int main()
//{
//	printf("%x %X %#x\n", 30, 30, 30);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	//% d ��dΪ������ʾ�ո� Ϊ����ʾ-
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);  //������.���ֱ�����Сλ��
//	//��0����г���- ����ָ�����Ⱥ��Ը�0���
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
//	printf("*%+4.2f*\n", RENT);		//��ʾ���� ��λΪ-4.2f �������
//	printf("*%010.2f*\n", RENT);	//��0����ǰ���ո�
//	return 0;
//}



//#define PRAISE "You are extraordinary being."
//int main()
//{
//	char name[40];
//
//	printf("What's your name? ");
//	scanf("%s", name); //��������Ϊ��Ԫ�ص�ַ����& scanf�ĸ�ʽ�������ַ���(ֻ��ȡ����һ������)
//	printf("hello. %s. %s\n", name, PRAISE);
//	return 0;
//}



////ת���ַ�ʾ��
//int main()
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\t$%.2f a month is %.2f a year.", salary, salary * 12);
//	printf("\rGee!\n"); //�س����ƶ���굽������ǰ
//	return 0;
//}



//int main()
//{
//	//ת�����м�ת���ַ� �����ַ�����ʱ��Ϊ�ַ�����Ҫ�õ�����������
//	//�����ַ����в��ü� �����ͨ�ַ�
//	char beep = '\007';
//	printf("hello!\007\n");
//		return 0;
//} 



//int main()
//{
//	//ת��˵������ӡֵ��ͬ
//	unsigned un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un=%u and not %d\n", un, un); 
//	printf("end=%hd and %d\n", end,end);  //��������
//	printf("bit=%ld and not %hd\n", big, big); //�ض�(ȡ��65537%65536��Ϊ%hd)
//	printf("verybig=%lld and not %ld\n", verybig, verybig); //�ض�
//
//	//��֤�ضϵ��㷨
//	printf("%d\n", big % 65536);   
//	return 0;
//}




//int main()
//{
//	//int x = 100;
//	//printf("%d %#o %#x\n", x, x, x);  //�˽���ǰ׺Ϊ0  �˽���ʮ���ƾ�Ϊ����
//	
//
//	//�������   ������Χ��תȦ
//	int i = 2147483647;
//	unsigned  j = 4294967295;
//	long k = 65536;
//	
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//	printf("%ld %#lx %#lo\n", k, k, k);    //#����%��ת��˵��֮��
//	return 0;
//}




//int main()
//{
//	float weight, value;
//
//	//�ÿ��и��������������������� ���ӿɶ���
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
//	//a��b�Ĺؼ���������һ����
//	unsigned a = 65536;
//	typedef unsigned us_32;
//	us_32 b = 65536;
//	return 0;
//}



//int main()
//{
//	register int a = 10;
//	//�д�������Ƶ��ʹ��ʱ��cpu��ȡ�ٶȸ���ʱ
//	//�����a����ɼĴ�������  �Ƿ����ȡ���ڱ�����
//	printf("%d\n", a);
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��Ԫ���������
//	int max = a > b ? a : b;    
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{	
//	//����������Ԫ��
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
//	//����������Ԫ�ظ���
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof arr / sizeof arr[0];
//	printf("sz=%d\n", sz);
//	return 0;
//}



//int main()
//{
//	//�����Բ�����ʽ�洢 
//
//	int a = 20;   //����ԭ������ֱͬ�Ӵ�ӡ
//	//0000 0000 0000 0000 0000 0000 0001 0100  
//	//0x00000014 �洢��ʽ  ���������С�˴洢����ʾΪ 14000000
//
//	int b = -10;
//	//��������ԭ����
//	//1000 0000 0000 0000 0000 0000 0000 1010   ԭ��
//	//1111 1111 1111 1111 1111 1111 1111 0101   ����
//	//1111 1111 1111 1111 1111 1111 1111 0110   ����
//	//0xfffffff6
//
//	b = b >> 1;   //�������� �ұ߶�����߲�ԭ����λ �߼����� �ұ߶��� ��߲�0
//	//1111 1111 1111 1111 1111 1111 1111 1011   ���ƺ���
//	//0xfffffffb  
//	//1111 1111 1111 1111 1111 1111 1111 1010   ���ƺ���
//	//1000 0000 0000 0000 0000 0000 0000 0101   ���ƺ�ԭ��(��ӡ-5) 
//
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("abcdef"));   //���6
//	// \32��������һ���˽����µ�ת���ַ��������ʮ������������ΪASCII��ֵ����Ӧ���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));  
//	//���14 \tҲ��һ���ַ� \328��8����\��� (�˽���0~7)
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	char arr4[] = { '\0' ,'b', 'i', 't', }; 
//	printf("%s %s %s %s\n", arr1, arr2, arr3,arr4);  //arr4ֱ�ӽ�������ӡ
//	printf("%d\n", strlen(arr1));  //strlen���ַ������ȼ�Ȼ'\0'�ǽ�����־�Ͳ�����
//	printf("%d\n", strlen(arr2));  //strlen�Ǻ�������ʱҪ��() ���ֵ
//	return 0;
//}



//#include <stdio.h>
//int global = 2019; //ȫ�ֱ���
//int main()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global=%d\n", global);  //�ֲ���������ʹ����ʾ2020
//	return 0;
//}



//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô�����(ѡ��1 or 0):>");
//	scanf("%d", &coding);
//	if (1 == coding)
//		printf("��֣����к�offer\n");
//	else
//		printf("�������ؼ�������\n");
//	return 0;
//}



//int main()
//{
//	//������ʱ��֮��
//	int hour1, minute1;
//	int hour2, minute2;
//	printf("��������ʱ��>:");
//	scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);
//	int minutes1 = hour1 * 60 + minute1;
//	int minutes2 = hour2 * 60 + minute2;
//	int t = minutes1 - minutes2;  //�ñ�������������������������
//	printf("ʱ�����%dСʱ%d��\n",t /60, t  % 60);
//	return 0;
//}