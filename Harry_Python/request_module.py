import requests
# r = requests.get("https://python.org/")
# print(r.text)
# print(r.status_code)

# url = "www.google.com"
# data = {
#     "p1" :4,
#     "p2" :4
# }
# r2 = requests.post(url=url, data=data)
# print(r2)

#response image
r = requests.get("https://d2wsh2n0xua73e.cloudfront.net/wp-content/uploads/2015/10/Facebook-logo.png")

with open('fb.png',"wb") as f:
    f.write(r.content)
print(r.ok)