import requests
import json

r = requests.get('https://newsapi.org/v2/top-headlines?country=in&apiKey=bb1816a5c6da4bd4ade2632ed83b987c')
print(r.text)
text = dict(r)
print(type(text))
jscom = json.loads(r)

print(type(jscom))
# parsed = json.loads(r)
#
#
# print(parsed)