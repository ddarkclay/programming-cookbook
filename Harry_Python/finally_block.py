f1 = open("file.txt")
try:
    f = open("file.txt")
except Exception as e:
    print(e)
else:
    print("This is Run Only if Except is Not Running");
finally:
    print("Run this anyway")
    f1.close()