#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"



void InitBoard(char add[hang][lei], char h, char l)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < l; j++)
        {
            add[i][j] = ' ';
        }
    }
}

void Displayadd(char add[hang][lei], char h, char l)
{
    int i = 0;
    for (i = 0; i < h; i++)
    {
        int j;
        
        for (j = 0; j < l; j++)
        {
            //��ӡһ������
            printf(" %c ", add[i][j]);
            if (j < l - 1)
            printf("|");
        }
        printf("\n");
        //��ӡ�ָ���
        if (i < h - 1)    //�ָ���ֻ��ӡ����
        {
            for (j = 0; j < l; j++)
            {
                printf("---");
                if ( j < l - 1)
                printf("|");
            }
        }
        printf("\n");
        
    }
}

void Playermove(char add[hang][lei], char h, char l)
{
    int x;
    int y;

    while (1)
    {
        printf("\n��һغϣ������룺");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= h && y >= 1 && y <= l)
        {
            if (add[x - 1][y - 1] == ' ')
            {
                add[x - 1][y - 1] = 'O';
                break;
            }
            else
            {
                printf("\n�۾�����ʹ������ϸ����0.0\n");
            }
        }
        else
        {
            printf("������Χ����������\n");
        }
    }
}

void Computermove(char add[hang][lei], char h, char l)
{
    int x = 0;
    int y = 0;
    while (1)
    {
        printf("���Իغϣ������룺\n");
        x = rand() % 3;
        y = rand() % 3;
        if (add[x][y] == ' ')
        {
            add[x][y] = 'X';
            break;
        }
    }
}

//����1��ʾ��������
//����0��û��
int IsFull(char add[hang][lei], char h, char l)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (add[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char WhoWin(char add[hang][lei], char h, char l)
{
    //�жϺ���������ͬ���ַ�
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (add[i][0] == add[i][1] && add[i][1] == add[i][2] && add[i][1] != ' ')
        {
            return add[i][1];
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (add[0][i] == add[1][i] && add[1][i] == add[2][i] && add[1][i] != ' ')
        {
            return add[0][i];
        }
    }
    //�ж������Խ���������ͬ�ַ�
    if (add[0][0] == add[1][1] && add[1][1] == add[2][2] && add[1][1] != ' ')
    {
        return add[1][1];
    }
    if (add[0][2] == add[1][1] && add[1][1] == add[2][0] && add[1][1] != ' ')
    {
        return add[1][1];
    }
    if (1 == IsFull(add,hang,lei))
    {
        return 'p';
    }
    return 'c';
}



