import wikipedia
from gtts import gTTS
from playsound import playsound
import time

def speak(data):
    my_audio = gTTS(data)
    my_audio.save('wiki_data.mp3')
    # for char in data:
    #     print(char,end="")
        # time.sleep(.25)
    print(data)
    playsound('wiki_data.mp3')


if __name__ == '__main__':
    speak("What Do Want to Search : ")
    search = input()
    data = wikipedia.summary(search,sentences=2)
    speak(data)