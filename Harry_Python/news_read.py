import requests
import json
import os
import time

def speak(str):
    print(str)
    os.system('espeak -s 120 "{} "'.format(str))


if __name__ == '__main__':
    speak("News for Today.. Lets Begin")
    url = "https://newsapi.org/v2/top-headlines?sources=the-times-of-india&apiKey="
    apiKey = "bb1816a5c6da4bd4ade2632ed83b987c"
    news = requests.get(url+apiKey).text
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

# r = requests.get('https://newsapi.org/v2/top-headlines?country=in&apiKey=bb1816a5c6da4bd4ade2632ed83b987c')
# print(r.text)
# text = dict(r)
# print(type(text))
# jscom = json.loads(r)
#
# print(type(jscom))
# parsed = json.loads(r)
#
#
# print(parsed)

# import requests
# parameters = {"lat": 37.78, "lon": -122.41}
# response = requests.get("http://api.open-notify.org/iss-pass.json", params=parameters)
#
# data = response.json()
# print(type(data))
# print(data)
# print(response.headers)
# print(response.headers["content-type"])
