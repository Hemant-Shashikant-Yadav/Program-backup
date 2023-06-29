#include <iostream>
#include <SDL.h>
#include <SDL_mixer.h>

#define MP3_FILE_PATH "C:/Users/Hemant/source/repos/Project1/2.mp3"

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_AUDIO);

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        std::cerr << "Failed to open audio device: " << Mix_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    Mix_Music* music = Mix_LoadMUS(MP3_FILE_PATH);
    if (music == nullptr) {
        std::cerr << "Failed to load MP3: " << Mix_GetError() << std::endl;
        Mix_CloseAudio();
        SDL_Quit();
        return 1;
    }

    if (Mix_PlayMusic(music, 0) < 0) {
        std::cerr << "Failed to play MP3: " << Mix_GetError() << std::endl;
        Mix_FreeMusic(music);
        Mix_CloseAudio();
        SDL_Quit();
        return 1;
    }
    while (true)
    {
        
        std::cout << "\n\nMP3 Music Player\nMenu = \n1.Play Music\n2.Pause Music\n3.Rewind music.\n4.Exit.\nChoose = ";
        int opt;
        if (Mix_PlayingMusic()==0)
        {
            /*
            Mix_FreeMusic(music);
            Mix_CloseAudio();
            SDL_Quit();
            return 1;
            */
            printf("\nMusic is ended either rewind numsic or exit from player.\nChoose=");
        }
        scanf_s("%d", &opt);

        if (opt == 4)
        {
            Mix_FreeMusic(music);
            Mix_CloseAudio();
            SDL_Quit();
            return 1;
        }
        switch (opt)
        {
        case 1:
            Mix_ResumeMusic();
            break;
        case 2:
            Mix_PauseMusic();
            break;
        case 3:
            if (Mix_PlayingMusic() == 0)
            {
                if (Mix_PlayMusic(music, 0) < 0) {
                    std::cerr << "Failed to play MP3: " << Mix_GetError() << std::endl;
                    Mix_FreeMusic(music);
                    Mix_CloseAudio();
                    SDL_Quit();
                    return 1;
                }
            }
            Mix_RewindMusic();
            break;
        default:
            printf("Invalid choice. Try again!!!");
            break;
        }

    }
 
    /*
    while (Mix_PlayingMusic() != 0) {
        SDL_Delay(100);
    }

    Mix_FreeMusic(music);
    Mix_CloseAudio();
    SDL_Quit();
    */
   
    return 0;
}
