#include <SDL2/SDL.h>
#include <vector>
#include <string>
#include <iostream>

// List of audio filenames
std::vector<std::string> audioFiles = {
    "audio1.wav",
    "audio2.wav",
    "audio3.wav"
};

// Index of the current audio file being played
int currentAudioIndex = 0;

// SDL audio callback function
void audioCallback(void* userdata, Uint8* stream, int len) {
    std::string audioFile = audioFiles[currentAudioIndex];

    // Load the current audio file
    SDL_AudioSpec wavSpec;
    Uint8* wavBuffer;
    Uint32 wavLength;
    if (SDL_LoadWAV(audioFile.c_str(), &wavSpec, &wavBuffer, &wavLength) == NULL) {
        std::cerr << "Failed to load audio file: " << audioFile << std::endl;
        return;
    }

    // Copy audio data to the output stream
    SDL_memcpy(stream, wavBuffer, len);

    // Free the loaded audio buffer
    SDL_FreeWAV(wavBuffer);
}

int main() {
    // Initialize SDL with audio subsystem
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Set up desired audio configuration
    SDL_AudioSpec desiredSpec;
    SDL_zero(desiredSpec);
    desiredSpec.freq = 44100;
    desiredSpec.format = AUDIO_S16SYS;
    desiredSpec.channels = 2;
    desiredSpec.samples = 4096;
    desiredSpec.callback = audioCallback;

    // Open the audio device with desired configuration
    SDL_AudioSpec obtainedSpec;
    if (SDL_OpenAudio(&desiredSpec, &obtainedSpec) < 0) {
        std::cerr << "Failed to open audio device: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Start audio playback
    SDL_PauseAudio(0);

    // Wait for audio playback to finish (optional)
    SDL_Delay(5000);

    // Stop audio playback and close the audio device
    SDL_PauseAudio(1);
    SDL_CloseAudio();

    // Quit SDL
    SDL_Quit();

    return 0;
}



void audioCallback(void* userdata, Uint8* stream, int len) {
    std::string audioFile = audioFiles[currentAudioIndex];

    // Load the current audio file
    // ...

    // Copy audio data to the output stream
    // ...

    // Free the loaded audio buffer
    // ...

    // Move to the next audio file
    currentAudioIndex++;
    if (currentAudioIndex >= audioFiles.size()) {
        currentAudioIndex = 0;  // Start from the beginning if reached the end
    }
}
