//192.168.73.184//This is main.c
#include <stdio.h>
#include <stdlib.h>
#include "screen.h" //for user-defined header, use double quotes
int main(){
	int arr[80];
	for(int i=0; i<80; i++) //just for making a bar
		arr[i] = rand()%70 + 30;
	clearScreen();
	setColors(RED, bg(BLUE));
	//printf("Printed from main.\n");
	barChart(arr);
	resetColors();
	printf("Another message\n");
	getchar();
}
