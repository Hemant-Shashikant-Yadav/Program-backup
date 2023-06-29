

#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;
std::vector<std::string> audioFiles;
std::vector<std::string> getAudioFilesInDirectory(const std::string &directoryPath)
{
    std::vector<std::string> audioFiles;

    // Iterate over files in the directory
    for (const auto &entry : fs::directory_iterator(directoryPath))
    {
        // Check if the file is an audio file
        if (entry.is_regular_file() && isAudioFile(entry.path().extension().string()))
        {
            // Add the file path to the vector
            audioFiles.push_back(entry.path().string());
        }
    }

    return audioFiles;
}

bool isAudioFile(const std::string &extension)
{
    // Define a list of supported audio file extensions
    static const std::vector<std::string> audioExtensions = {".mp3", ".wav"};

    // Check if the given extension matches any audio extension
    for (const auto &audioExtension : audioExtensions)
    {
        if (extension == audioExtension)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    std::string directoryPath = "path/to/your/directory";

    audioFiles = getAudioFilesInDirectory(directoryPath);

    // Print the list of audio files
    for (const auto &audioFile : audioFiles)
    {
        std::cout << audioFile << std::endl;
    }

    return 0;
}
