#include <iostream>
#include <SDL.h>
#include <SDL_mixer.h>
#include <string>
#include <vector>
#include <filesystem>
#include <cstdlib>


//#define MP3_FILE_PATH "C:/Users/Hemant/source/repos/Project1/2.mp3"

namespace fs = std::filesystem;
std::vector<std::string> audioFiles;
std::vector<std::string> getAudioFilesInDirectory(const std::string& directoryPath)
{
    std::vector<std::string> audioFiles;

    for (const auto& entry : fs::directory_iterator(directoryPath))
    {
        if (entry.is_regular_file() && entry.path().extension() == ".mp3")
        {
            audioFiles.push_back(entry.path().string());
        }
    }

    return audioFiles;
}

void playMusic(int index, Mix_Music* music) {

    music = Mix_LoadMUS(audioFiles[index].c_str());
    if (music == nullptr) {
        std::cerr << "Failed to load MP3: " << Mix_GetError() << std::endl;
        Mix_CloseAudio();
        SDL_Quit();
        return ;
    }

    if (Mix_PlayMusic(music, 0) < 0) {
        std::cerr << "Failed to play MP3: " << Mix_GetError() << std::endl;
        Mix_FreeMusic(music);
        Mix_CloseAudio();
        SDL_Quit();
        return ;
    }
}


    int main(int argc, char** argv) {
        int index = 0;
      
        SDL_Init(SDL_INIT_AUDIO);

        std::string directoryPath = "C:/Users/Hemant/source/repos/son/";
        audioFiles = getAudioFilesInDirectory(directoryPath);
       

        if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
            std::cerr << "Failed to open audio device: " << Mix_GetError() << std::endl;
            SDL_Quit();
            return 1;
        }
        Mix_Music* music=  nullptr;
        playMusic(0, music);
        while (true)
        {
        
            std::cout << "\n\nMP3 Music Player\nMenu = \n1.Play Music\n2.Pause Music\n3.Rewind music.\n4.Play next.\n5.Play previous\n6.Play random\n7.Exit.\nChoose = ";
            int opt;
            if (Mix_PlayingMusic()==0)
            {
              
                printf("\nMusic is ended either rewind music, play next, play previous or exit from player.\nChoose=");
            }
            scanf_s("%d", &opt);

            if (opt == 7)
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
            case 4:
                index = (index + 1) % audioFiles.size();
                playMusic(index,music);
                break;
            case 5:
                if (index == 0)
                {   
                    index = audioFiles.size();
                }
                index -= 1;
                playMusic(index, music);
                break;
            case 6:
               
                index = rand() % audioFiles.size();
                playMusic(index, music);
                break;
            default:
                printf("Invalid choice. Try again!!!");
                break;
            }

        }

   
        return 0;
    }
