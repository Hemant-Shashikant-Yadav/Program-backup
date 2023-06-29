#include<iostream>
#include<SDL.h>
//#include<SDL_mixer.h>
//#include <string>
//#include <vector>
//#include <filesystem>
using namespace std;

#define PATH  "C:/Users/Hemant/source/repos/0.wav"
#define a "./0.wav"

struct audioData {
	Uint8* pos;
	Uint32 length;

};

void AudioCallback(void* userdata, Uint8* stream, int streamlen) {
	audioData* audio = (audioData*)userdata;

	if (audio->length==0)
	{
		return;
	}
	
	Uint32 length = (Uint32)streamlen;
	length = (length > audio->length ? audio->length : length);

	SDL_memcpy(stream, audio->pos, length);

	audio->pos += length;
	audio->length -= length;

}

int main(int argc, char** argv) {

	SDL_Init(SDL_INIT_AUDIO);

	SDL_AudioSpec wavSpec;
	Uint8* wavStart;
	Uint32 wavLength;


	if (SDL_LoadWAV("C:/Users/Hemant/source/repos/0.wav", &wavSpec, &wavStart, &wavLength) == NULL)
	{
		cerr << "Failed to load WAV: " << SDL_GetError() << endl;
	}


	audioData audio;
	audio.pos = wavStart;
	audio.length = wavLength;

	wavSpec.callback = AudioCallback;
	wavSpec.userdata = &audio;


	SDL_AudioDeviceID device = SDL_OpenAudioDevice(NULL, 0, &wavSpec, NULL, SDL_AUDIO_ALLOW_ANY_CHANGE);

	cout << "Hello";

	if (device==0)
	{
		cerr << "Error";
		return 1;
	}

	SDL_PauseAudioDevice(device, 0);

	while (audio.length>0)
	{
		SDL_Delay(1000);
	}

	SDL_CloseAudioDevice(device);
	SDL_FreeWAV(wavStart);
	SDL_Quit();
	return 0;
}