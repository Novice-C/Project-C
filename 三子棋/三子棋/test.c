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
	//初始化棋盘
	InitBoard(add, hang, lei);  
	//打印棋盘
	Displayadd(add, hang, lei);
	//开始下棋
	while (1)
	{
		//玩家落子
		Playermove(add, hang, lei);
		Displayadd(add, hang, lei);

		//判断输赢or平局or继续
		arr = WhoWin(add, hang, lei);
		if (arr != 'c')
		{
			break;
		}

		//电脑落子
		Computermove(add, hang, lei);
		Displayadd(add, hang, lei);

		//判断输赢or平局or继续
		
		arr = WhoWin(add, hang, lei);
		if (arr != 'c')
		{
			break;
		}
	}
	if (arr == 'O')
	{
		printf("玩家赢\n");
	}
	else if (arr == 'X')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}


void test()
{
	menu();
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		printf("请输入:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}


