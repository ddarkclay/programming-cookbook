import requests
import json
from gtts import gTTS
from playsound import playsound
import time

def speak(data):
    my_audio = gTTS(data)
    my_audio.save('news.mp3')
    # for char in data:
    #     print(char,end="")
        # time.sleep(.25)
    print(data)
    playsound('news.mp3')


if __name__ == '__main__':
    speak("News for Today.. Lets Begin")
    speak("Which Category Of News Do you Want to Listen : ")
    print(" 1 : Business \n 2 : Entertainment \n 3 : Health \n 4 : Science \n 5 : Sports \n 6 : Technology\n")
    choice = int(input("Which Category Of News Do you Want ot Listen : "))
    category = {1:'business',2:'entertainment',3:"health",4:"science",5:"sport",6:"technology"}
    select = category.get(choice,"Invalid Category")
    apiKey = "bb1816a5c6da4bd4ade2632ed83b987c"
    url = f"https://newsapi.org/v2/top-headlines?country=in&category={select}&apiKey={apiKey}"
    news = requests.get(url).text
    # print(news)
    news_dict = json.loads(news)
    # print(news_dict)
    arts = news_dict['articles']
    for index, article in enumerate(arts):
        speak(article['title'])
        print("For More Information visit : ",article['url'])
        time.sleep(1)
        print()
        if index == len(arts) - 1:
            speak("Thanks for Listening .")
            break
        speak("Next News is :")
