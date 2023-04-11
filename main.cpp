//START
#include<iostream>		//input/output objects c++
#include<windows.h>		//Sleep,gotoxy coordinate functions
#include"MMSystem.h"	//plays audio track
#pragma comment(lib, "winmm.lib")
using namespace std;

COORD coord = {0, 0};

void gotoxy (int x, int y)	//defining/initializing to predefined objects
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//plays audio
void play(int a)
{
	if(a==1)
	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
	if(a==2)
	PlaySound(TEXT("collect.wav"), NULL, SND_SYNC);
	if(a==3)
	PlaySound(TEXT("mix.wav"), NULL, SND_SYNC);	
	if(a==4)
	PlaySound(TEXT("thank_you.wav"), NULL, SND_SYNC);
	
}

void scroll_note()	//welcome note
{
	system("color CF");
	int j,i,x,y;
	for(i=0;i<27;i++)
	{
		gotoxy(i,12);cout<<" ";
		cout<<"PAYME FAST ATM SERVICES";
		Sleep(40);
	}

	for(j=67;j>30;j--)
	{
		gotoxy(j,15);
		cout<<"WELCOMES YOU";cout<<"            ";
		Sleep(40);
	}
	play(1);
	for (int c = 1; c <= 20; c++)  //randomly printing "$"
	{

		x = rand() % 70 + 1;  y = rand() % 20 + 1;
		gotoxy(x,y);cout<<"$";
		Sleep(180);gotoxy(x,y);cout<<" ";
	}
	
	gotoxy(27,12);cout<<"PAYME FAST ATM SERVICES";
	gotoxy(31,15);cout<<"WELCOMES YOU";
	for(int j=78;j>=0;j--)
	{
		gotoxy(j,20);cout<<"|";
		gotoxy(j,4);cout<<"|";
		Sleep(30);
	}
	gotoxy(56,23);cout<<"James    160114737050";
	gotoxy(56,24);cout<<"Patrick 160114737051";
	Sleep(2000);

}


int main() {
	scroll_note();		//welcome note
}