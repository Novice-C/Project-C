#pragma once
#define hang 3
#define lei 3


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//函数声明
void InitBoard(char add[hang][lei],char h,char l);
void Displayadd(char add[hang][lei], char h, char l);
void Playermove(char add[hang][lei], char h, char l);
void Computermove(char add[hang][lei], char h, char l);


//玩家赢返回“O”
//电脑赢返回“X”
//平局返回  “p”
//继续返回  “c”
char WhoWin(char add[hang][lei], char h, char l);