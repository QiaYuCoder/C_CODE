#include <stdio.h>
#include <string.h>
//�ṹ�崫��ʱҪ���ṹ���ַ
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

//��ַ���ÿ�δ�8���ֽ� ����ʱʵ��Ҫѹջ �β���ʵ�ε���ʱ����
//���ṹ��̫�����ѹջ��ϵͳ������ �ᵼ�������½�
void print2(Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%hd\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);

}

int main()
{
	Stu s = { "����", 20, "123456789", "��" };
	print1(s);
	print2(&s);
	return 0;
}



////�ṹ��Ƕ��
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




//�ṹ��->���Ӷ���->�����Լ��������һ������

//����һ���ṹ������(��������������Ϊȫ�ֱ��������洦��ʹ��) 
//��ʱ�����ٴ洢�ռ� ֻ�д����ṹ�����ʱ�Ż�
//struct Book
//{
//	char name[40]; //C�������
//	short price;	//55
//};					//�ֺ����ڽ��������Ͷ���ز�����
//
//struct Stu
//{
//	char name[40];
//	short age;
//	int tall;
//	char tele[12];
//	char sex[5];
//	
//}s1,s2,s3;			//��ʱ�����ṹ�����ͺ�ֱ�Ӷ�������ȫ�ֱ���(��main֮��) һ�㲻��
//
//
//int main()
//{
//	s1.age = 25;
//	strcpy(s1.name, "JAVA");
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	//ֻ���ڳ�ʼ������ʱ������={}
//	 //s1 ={"QiaYuCoder", 23, 172.2, "18808235044", "��" }; 
//
//
//	//���������������Ľṹ�����������������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	//�ó����г�Ա��������һ	
//	printf("����:%s\n", b1.name);
//	printf("�۸�:%hdԪ\n", b1.price);
//	b1.price = 15;		//price�Ǳ�����ֱ��ֵ
//	//b1.name = "C++";	name����Ԫ�ص�ַ���ܸ�����ַ���ֵ
//	strcpy(b1.name, "C++");
//
//
//	printf("�޸ĺ�ļ۸�Ϊ%hdԪ\n", b1.price);
//	printf("%s\n", b1.name);
//
//	//�ó����г�Ա������(ָ��)
//	struct Book* b2 = &b1;
//	printf("%s\n", (*b2).name);
//	printf("%hd\n", (*b2).price);
//
//	//�ó����г�Ա������(ָ��)
//	printf("%s\n", b2->name);
//	printf("%hd\n", b2->price);
//
//	return 0;
//}