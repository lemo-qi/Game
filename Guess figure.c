#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>

void menu()
{
	printf("###############\n");
	printf("###############\n");
	printf("####1play######\n");
	printf("####0over######\n");
	printf("####3err,again#\n");
	printf("###############\n");
	printf("###############\n");

}

void game()
{

	int ret = rand() % 100 + 1;
	//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d", ret);


	//������
	int guess = 0;
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}


