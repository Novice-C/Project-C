#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("----------1.play         0.exit------------\n");

}


void game()
{
	char arr = 0;
	char add[hang][lei] = {0};
	//��ʼ������
	InitBoard(add, hang, lei);  
	//��ӡ����
	Displayadd(add, hang, lei);
	//��ʼ����
	while (1)
	{
		//�������
		Playermove(add, hang, lei);
		Displayadd(add, hang, lei);

		//�ж���Ӯorƽ��or����
		arr = WhoWin(add, hang, lei);
		if (arr != 'c')
		{
			break;
		}

		//��������
		Computermove(add, hang, lei);
		Displayadd(add, hang, lei);

		//�ж���Ӯorƽ��or����
		
		arr = WhoWin(add, hang, lei);
		if (arr != 'c')
		{
			break;
		}
	}
	if (arr == 'O')
	{
		printf("���Ӯ\n");
	}
	else if (arr == 'X')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}


void test()
{
	menu();
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		printf("������:");
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
				printf("�����������������\n");
				break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}


