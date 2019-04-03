#include <stdlib.h>		// for random numbers
#include <signal.h>
#include <time.h>		// for randomization (using system time)
#include "screen.h"
#include <stdio.h>
#include "sound.h"

int main(){
	FILE *f;
	short sd[RATE]; //for all samples in 1 sec. sd[80000];
	while(1){
		int ret = system(CMD);
		if(ret == SIGINT) break;
		f = fopen("test.wav", "r");
		if(f == NULL){
			printf("Cannot open the file\n");
			return 1;
		}
		clearScreen();
		setColors(YELLOW, bg(BLUE));
		struct WAVHDR hdr;
		fread(&hdr, sizeof(hdr), 1, f);		// read WAV header
		fread(&sd, sizeof(sd), 1, f); //read WAV data
		fclose(f);
		displayWAVHDR(hdr); //display WAVHDR();
		displayWAVDATA(sd);
	}
	resetColors();
	getchar();
}
