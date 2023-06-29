



#include <SDL_mixer.h>
#include <SDL.h>
#include <vector>
#include <string>
#include <iostream>

// List of audio filenames
std::vector<std::string> audioFiles = {
    "1.mp3",
    "2.mp3",
    "3.mp3"
};

// Index of the current audio file being played
int currentAudioIndex = 0;

// SDL audio callback function
void audioCallback(void* userdata, Uint8* stream, int len) {
    // Silence the output stream
    SDL_memset(stream, 0, len);

    std::string audioFile = audioFiles[currentAudioIndex];

    // Load the current audio file with SDL_mixer
    Mix_Music* music = Mix_LoadMUS(audioFile.c_str());
    if (!music) {
        std::cerr << "Failed to load audio file: " << audioFile << std::endl;
        return;
    }

    // Play the loaded audio file
    if (Mix_PlayMusic(music, 1) == -1) {
        std::cerr << "Failed to play audio file: " << audioFile << std::endl;
    }

    // Release the SDL_mixer music resource
    Mix_FreeMusic(music);
}

int main() {
    // Initialize SDL with audio subsystem
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        return -1;
    }

    // Initialize SDL_mixer
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        std::cerr << "Failed to initialize SDL_mixer: " << Mix_GetError() << std::endl;
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

    // Quit SDL_mixer
    Mix_Quit();

    // Quit SDL
    SDL_Quit();

    return 0;
}
