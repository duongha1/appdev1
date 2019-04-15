<<<<<<< HEAD
// for operating with screen
#include<stdio.h>
=======
#include <stdio.h>
>>>>>>> 6fd3a5368d14aec091b302130b11b2b1c5f97541
#include "screen.h"
void barChart(int a[])
{
	int i,j;// counters
	for(i =0;i<80;i++)// for 80 columns
	{
		for(j=0;j<a[i]/3;j++)
		{
			printf("\033[%d;%dH",35-j,i+1);
#ifdef UNICODE
			printf("%s","\u2590");
#else
			printf("%c", ' ');
#endif
		}
	}
}
void clearScreen(void)
{
	printf("\033[2J");
	fflush(stdout); //active esc.seq. immediat
}
void setColors(short fg, short bg)
{
	printf("\033[%d;%d;1m",fg,bg);
	fflush(stdout);//immediat
}
void resetColors(void)
{
	printf("\033[0m");
	fflush(stdout);
}
