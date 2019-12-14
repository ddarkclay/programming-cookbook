import time;
currenttime = time.time()
print(currenttime)
n = 1
while n <= 50:
    print(n)
    n += 1
    time.sleep(1)

print("To execute this program it takes : ",time.time() - currenttime," Seconds .")