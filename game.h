#pragma once
#define hang 3
#define lei 3


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//��������
void InitBoard(char add[hang][lei],char h,char l);
void Displayadd(char add[hang][lei], char h, char l);
void Playermove(char add[hang][lei], char h, char l);
void Computermove(char add[hang][lei], char h, char l);


//���Ӯ���ء�O��
//����Ӯ���ء�X��
//ƽ�ַ���  ��p��
//��������  ��c��
char WhoWin(char add[hang][lei], char h, char l);