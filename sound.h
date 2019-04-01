//constants definiton
#define RATE 16000 //samples per second

//data structures
struct WAVHDR{
	char ChunkID[4]; //it has to be "RIFF"
	int ChunkSize; //4-byte number
	char Format[4]; //it has to be "WAVE"

	char SUbchunk1ID[4]; //"fmt"
	int Subchunk1Size; //PCM = 16
	short AudioForm// should be 1
	short NumberChannels; //should be 1 for mono
	int SampleRa// 16000
	int ByteRate; //16000*NumberChann*s*BiPerSample/8
	short Blocligngn; //NumberChannels*BitsPerSample/8
	short BitsPerSample; //in our app, 16 (-f S16_LE)

	char Su2ID[4]; //data
	int Subchunk2Size;//
};
//function declaration
