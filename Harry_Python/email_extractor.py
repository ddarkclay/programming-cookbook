import re

data = '''

Random Lists

    Phone Numbers
    URLs
    Credit Cards
    Passwords
    Fake Names

Search
Menu
Random Email Addresses:

    mrdvt@live.com
    biglou@sbcglobal.net
    maradine@comcast.net
    mglee@mac.com
    webteam@outlook.com
    wildixon@yahoo.com
    suresh@me.com
    kuparine@yahoo.ca
    jesse@msn.com
    stewwy@live.com
    hermanab@mac.com
 dfsd   rnewman@verizon.net
    hellfire@comcast.net
    melnik@mac.com
  xdewrw  tskirvin@yahoo.ca
    mugwump@outlook.com
    jgmyers@sbcglobal.net
    rfisher@me.com
    heidrich@hotmail.com
    plover@msn.com

Edit Settings

Quantity

Notice: Since these are randomly generated, some of this email address may be unintentionally real.

Want a fake name or address too?

    Home
    FAQ
    Privacy Policy
    Contact
    Randomize your custom list
    Sitemap

This site is offered as is to those who visit it. We make no guarantees regarding its services. Just enjoy yourself.

'''

# print(data)
# emails = re.findall(r"[0-9a-zA-Z._+%]+@[0-9a-zA-Z._+%]+[.][a-zA-Z.0-9]+",data)
emails = re.findall(r"\w+@\S+\w",data)
# print(emails)
f = open("emails.txt","a")

for index, email in enumerate(emails):
    f.write(f"Email {index+1} : {email}\n")
    print(f"Email {index + 1} : {email}")
f.close()
