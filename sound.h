//constants definiton
#define RATE 16000 //samples per second
//#define DUR 5
#define CMD "arecord -r16000 -c1 -f S16_LE -d5 test.wav"

//data structures
struct WAVHDR{
	char ChunkID[4]; //it has to be "RIFF"
	int ChunkSize; //4-byte number
	char Format[4]; //it has to be "WAVE"

	char Subchunk1ID[4]; //"fmt"
	int Subchunk1Size; //PCM = 16
	short AudioFormat;// should be 1
	short NumChannels; //should be 1 for mono
	int SampleRate;// 16000
	int ByteRate; //16000*NumberChann*s*BiPerSample/8
	short BlockAlign; //NumberChannels*BitsPerSample/8
	short BitsPerSample; //in our app, 16 (-f S16_LE)

	char Subchunk2ID[4]; //data
	int Subchunk2Size;//
};
//function declaration
	void displayWAVHDR(struct WAVHDR);
//	void showID(char *, char *);
	void displayWAVDATA(short []);
