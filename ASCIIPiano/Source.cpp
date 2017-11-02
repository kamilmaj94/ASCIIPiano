#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void dispKeyboard(char Wc, char Bc, char Wd, char Bd, char We, char Wf, char Bf, char Wg, char Bg, char Wa, char Ba, char Wb, char Wx)
{
		system("cls");
		for (int i = 0; i < 6; i++) { printf("%c", 205); }
		printf("%c", 185);
		printf("CYCKI%c",2);
		printf("%c", 204);
		for (int i = 0; i < 6; i++) { printf("%c", 205); }
		printf("\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Bc, Bc, Wd, Bd, Bd, We, We, Wf, Bf, Bf, Wg, Bg, Bg, Wa, Ba, Ba, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Bc, Bc, Wd, Bd, Bd, We, We, Wf, Bf, Bf, Wg, Bg, Bg, Wa, Ba, Ba, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Bc, Bc, Wd, Bd, Bd, We, We, Wf, Bf, Bf, Wg, Bg, Bg, Wa, Ba, Ba, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Bc, Bc, Wd, Bd, Bd, We, We, Wf, Bf, Bf, Wg, Bg, Bg, Wa, Ba, Ba, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Wc, Wc, Wd, Wd, Wd, We, We, Wf, Wf, Wf, Wg, Wg, Wg, Wa, Wa, Wa, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Wc, Wc, Wd, Wd, Wd, We, We, Wf, Wf, Wf, Wg, Wg, Wg, Wa, Wa, Wa, Wb, Wb, Wx, Wx);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", Wc, Wc, Wc, Wc, Wd, Wd, Wd, We, We, Wf, Wf, Wf, Wg, Wg, Wg, Wa, Wa, Wa, Wb, Wb, Wx, Wx);
}
int main()
{
	char Wc = 219; //white
	char Wd = 219; //white
	char We = 219; //white
	char Wf = 219; //white
	char Wg = 219; //white
	char Wa = 219; //white
	char Wb = 219; //white
	char Wx = 219; //white
	char Bc = 32; //black
	char Bd = 32; //black
	char Bf = 32; //black
	char Bg = 32; //black
	char Ba = 32; //black
	char p = 177; //pressed
	int choice = 1;
	int time = 100;
	unsigned int pedal = 0;
	dispKeyboard(Wc, Bc, Wd, Bd, We, Wf, Bf, Wg, Bg, Wa, Ba, Wb, Wx);
	while (true)
	{
		Wc = 219; //white
		Wd = 219; //white
		We = 219; //white
		Wf = 219; //white
		Wg = 219; //white
		Wa = 219; //white
		Wb = 219; //white
		Wx = 219; //white
		Bc = 32; //black
		Bd = 32; //black
		Bf = 32; //black
		Bg = 32; //black
		Ba = 32; //black
		p = 177; //pressed

		char c;

		c = getch();
		switch (c)
		{
		case 'z':
			Wc = p;
			Beep(325 * choice,     time += pedal); //C
			break;
		case 's':
			Bc = p;
			Beep(347 * choice,     time += pedal); //C#
			break;
		case 'x':
			Wd = p;
			Beep(367 * choice,     time += pedal); //D
			break;
		case 'd':
			Bd = p;
			Beep(389 * choice,     time += pedal); //D#
			break;
		case 'c':
			We = p;
			Beep(412 * choice,     time += pedal); //E
			break;
		case 'v':
			Wf = p;
			Beep(437 * choice,     time += pedal); //F
			break;
		case 'g':
			Bf = p;
			Beep(463 * choice,     time += pedal); //F#
			break;
		case 'b':
			Wg = p;
			Beep(490 * choice,     time += pedal); //G
			break;
		case 'h':
			Bg = p;
			Beep(519 * choice,     time += pedal); //G#
			break;
		case 'n':
			Wa = p;
			Beep(550 * choice,     time += pedal); //A
			break;
		case 'j':
			Ba = p;
			Beep(583 * choice,     time += pedal); //A#
			break;
		case 'm':
			Wb = p;
			Beep(617 * choice,     time += pedal); //B
			break;
		case ',':
			Wx = p;
			Beep(654 * choice,     time += pedal); //C++
			break;
		case 27:
			return 0;
			break;
		case 91:
			pedal -= 100;
			break; //-
		case 93:
			pedal += 100;
			break; //+
		case 49: choice = 1; break;
		case 50: choice = 2; break;
		case 51: choice = 3; break;
		case 52: choice = 4; break;
		case 53: choice = 5; break;
		case 54: choice = 6; break;
		case 55: choice = 7; break;
		case 56: choice = 8; break;
		case 57: choice = 9; break;
		default:
			Beep(150, 100);
			break;
		}
		dispKeyboard(Wc, Bc, Wd, Bd, We, Wf, Bf, Wg, Bg, Wa, Ba, Wb, Wx);
	}
	return 0;
}