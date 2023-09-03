
from pytube import YouTube

url = input("Enter youtube video url = ")
# video_url = "https://www.youtube.com/watch?v=Tto8TS-fJQU&list=PLu0W_9lII9agwh1XjRt242xIpHhPT2llg&index=3&ab_channel=CodeWithHarry"

yt = YouTube(url)

stream = yt.streams.get_highest_resolution()

output_path = "Y:\Coding\Program-backup\Python\Projects\YtDownload"

stream.download(output_path)

print("Video downloaded successfully!")
