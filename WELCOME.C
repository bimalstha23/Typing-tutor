#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<dos.h>
void WS2(void)
{
	int i;
	char text[500]="\
000000 00  00 00000   0000 00    00  0000\n\r\
  00    0000  00  00   00  0000  00 00\n\r\
  00     00   00000    00  00 00 00 00 00\n\r\
  00     00   00       00  00  0000 00  00\n\r\
  00     00   00      0000 00    00  0000\n\r\
\n\r\
000000 00    00  000000 0000000 000000\n\r\
  00   00    00    00   00   00 00  00\n\r\
  00   00    00    00   00   00 00000\n\r\
  00   00    00    00   00   00 00   00\n\r\
  00   00000000    00   0000000 00     00\
\n\n\n\n\n\n\rBimal Shrestha/ Rikesh Shrestha/ Nishan Shrestha";
	textmode(C80);
	textbackground(0);
	_setcursortype(_NOCURSOR);
	window(15,5,80,25);
	for(i=0;i<16;i++)
	{
		textcolor(i);
		clrscr();
		cprintf(text);
		delay(100);
	}
}
