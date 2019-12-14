from math import *

str = input("Enter a String : ")
spaces = 0
word = 0
character = 0

for ch in str:
    if(ch != ' '):
        character += 1;
    elif(ch == ' '):
        word += 1
        spaces += 1
print("No of Character in String is : ",character)
print("No of Word in String is : ",word+1 )
print("No of Spaces in String is :",spaces)
