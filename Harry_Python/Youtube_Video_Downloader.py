from pytube import YouTube
link = input("Enter URL of Youtube Video : ")
yt = YouTube(link)

videos = yt.streams.all()

print(videos)