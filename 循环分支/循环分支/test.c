#include <stdio.h>
#include <string.h>
//�����֧(if switch) ����ѭ��(while for do while)
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
//	for ( i = 0,k=0; k=0; i++,k++) //���Բ����Ǹ�ֵΪ��ѭ��0��
//	{
//		k++;
//	}
//	return 0;
//}




//int main()
//{
//	//for���Բ���ʡ�Ժ�Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



//int main()
//{
//	//��forѭ����������ǰ�պ�
//	int digital[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//
//	//ǰ�պ󿪵�ʵ������
//	//10��Ԫ��
//	//10��ѭ��
//	//10�δ�ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", digital[i]);
//	}
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	//������forѭ�����ڸı�ѭ����������ֹforѭ��ʧȥ����
//	int i = 0;

//	for ( i = 0; i <10; i++)
//	{
//		if (i = 5)			//�ı�ѭ������������ѭ��
//			printf("haha\n");
//		printf("hehe\n");  //
//	}
//	return 0;
//}



//int main()
//{
//	//continue��forѭ������ֹ����ѭ�����ȸ����ٽ����´�ѭ��
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
//	printf("����������:> ");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	while ((getchar()) != '\n')  //������123456 ABCDEFʱ���ڶ�ȡ ABCDEF'\n'����ȥ �ﵽ��ջ�����������
//		;						//!='\n'����δ����
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}




//int main()
//{
//	char ret;
//	char password[20] = {0};
//
//	printf("����������:> ");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	getchar();			//������123456ʱ���ڶ�ȡ��һ�λ������е�\n
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}



//int main()
//{
//	char ch = 0;

//	//end of file �ļ�������־-> -1 
//	//����Ϊctrl+z
//	//��ѭ����ȡ�ַ���������ջ�����
//	while ((ch=getchar())!=EOF)  //ÿ��ֻ��ȡһ���ַ� �ո�س�Ҳ�ᱻ��ȡ(\n)
//	{
//		putchar(ch);			//ÿ��ֻ���һ���ַ�
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
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);

//	switch (day)   //�����������α��ʽ
//	{
//	case 1:			//case��Ϊ���γ������ʽ ����������
//		printf("����1\n");
//		break;		//��switch���޷�ֱ��ʵ�ַ�֧ Ҫ����break����ʵ�������ķ�֧
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}



////�ж�һ�����Ƿ�Ϊ����
//int main()	
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (0 == i % 2)
//	{
//		printf("ż��\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}



//���1��100֮�������
//int main()
//{
//	////��һ
//	//int i = 0;
//	//for ( i = 1; i <=100; i++)
//	//{
//	//	if (i % 2 != 0)
//	//		printf("%d ", i);
//	//}
//	//printf("\n");
//
//	////����
//	//int i = 1;
//	//while (i<=100)
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//	//printf("\n");
//	//return 0;
//
//	//����
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;	//�����ǲ���������Ҫ������ȫ
//	}
//}



//int main()
//{
//	//int age = 0;
//	//scanf("%d", &age);
//	//if (age<18)
//	//{
//	//	printf("δ����\n");
//	//}
//	//else if (18 <= age && age < 30)
//	//{
//	//	printf("����\n");
//	//}
//	//else if (30 <= age && age < 50)
//	//	printf("׳��\n");
//	//else
//	//	printf("����\n");
//
//	//����else���⣺else�������if��ƥ��
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//		//�����if�൱��һ����� ��һ���� 
//		//������ʲô��û�� �������һ��if
//	return 0;
//}