import os

# text = "Hello World"

with open("names.txt") as f:
    names = f.read()
    print(names)
    print(type(names))
os.system('espeak -s 120 "{} "'.format(names))

