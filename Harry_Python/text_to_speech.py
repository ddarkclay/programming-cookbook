import gtts,os
from gtts import gTTS

text = gTTS("Hello world This is my First Voice")
text.save("voice2.mp3")
os.system("voice2.mp3")
os.remove("voice2.mp3")
